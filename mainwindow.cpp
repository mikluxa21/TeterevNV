#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    is_painting = false;

    File file;
    QString start_settings = file.Take(QDir::currentPath() + "/setting.txt");
    dir_for_save = start_settings.split("\r\n")[0];
    timer_count = start_settings.split("\n")[1].toInt();

    connect(ui->action_Timer, SIGNAL(triggered()), this, SLOT(setTimerCount()));
    connect(ui->action_Dir, SIGNAL(triggered()), this, SLOT(setDirForSave()));
    connect(&set_timer_count, SIGNAL(returnValue(int)), this, SLOT(changeTimerCount(int)));
}


MainWindow::~MainWindow() {

    delete ui;
}


void MainWindow::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);

    QPainter painter(this);

    if(!line_points.isEmpty()){
        for(int i = 0; i < line_points.length() - 1; i++){
            way_count += QString::number(qSqrt(qPow(line_points[i].rx() - line_points[i + 1].rx(), 2) +
                                               qPow(line_points[i].ry() - line_points[i + 1].ry(), 2))).
                                               split(".")[0].
                                               toInt();

            ui->lineEdit_way->setText(QString::number(way_count));

            painter.drawLine(line_points[i], line_points[i+1]);
        }
    }
    way_count = 0;
}


void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    QWidget::mouseMoveEvent(event);

    if (event->pos().rx() >= 0 &&
        event->pos().rx() <= 850 &&
        event->pos().ry() >= 0 &&
        event->pos().ry() <= 600)
    {
        ui->lineEdit_x->setText(QString::number(event->pos().rx()));
        ui->lineEdit_y->setText(QString::number(event->pos().ry()));

        if(is_painting) {
                line_points<<event->pos();
                ui->lineEdit_x->setText(QString::number(event->pos().rx()));
                ui->lineEdit_y->setText(QString::number(event->pos().ry()));
                update();
            }
    }
}


void MainWindow::mouseReleaseEvent(QMouseEvent *event) {
    QWidget::mouseMoveEvent(event);

    ui->lineEdit_x->setText("");
    ui->lineEdit_y->setText("");
}


void MainWindow::timerEvent(QTimerEvent *event) {
    QWidget::timerEvent(event);

    is_painting = false;
    killTimer(timer_id);

    if(!line_points.isEmpty()) {
        QString path = dir_for_save+ "/" + QDateTime::currentDateTime().toString("dd.MM.yyyy_HH.mm.ss") + ".txt";

        QString data="";
        for(int i = 0; i< line_points.size();i++){
            data += "(" + QString::number(line_points[i].rx()) + ", " + QString::number(line_points[i].ry()) + ")";
        }

        contr_thread.makeThread(path, data);
        line_points.clear();
    }
}

void MainWindow::setTimerCount(){

    set_timer_count.setValue(timer_count);
    set_timer_count.setWindowTitle("Настройка интервала времени");
    set_timer_count.show();
}


void MainWindow::setDirForSave() {

    dir_for_save = QFileDialog::getExistingDirectory(0, "Выбрать");
}


void MainWindow::on_pushButton_Start_clicked() {

    if(dir_for_save != nullptr){
        timer_id = startTimer(timer_count);
        is_painting= true;
    }
    else{
        QMessageBox::warning(this, "Проблемма", "Введите название директории");
    }
}


void MainWindow::changeTimerCount(int timer_value) {

    timer_count = timer_value;
}
