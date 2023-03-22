#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QMouseEvent>
#include <QPainter>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QtMath>

#include "settimercount.h"
#include "File.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    SetTimerCount set_timer_count;
    Controller contr_thread;

    QList<QPoint> line_points;
    QString dir_for_save;

    int way_count;
    int timer_id;
    int timer_count;
    bool is_painting;

protected:
    void paintEvent(QPaintEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

    void mouseReleaseEvent(QMouseEvent *event) override;

    void timerEvent(QTimerEvent *event);

private slots:
    void setTimerCount();

    void setDirForSave();

    void on_pushButton_Start_clicked();

    void changeTimerCount(int timer_value);
};
#endif // MAINWINDOW_H


