#include "settimercount.h"
#include "ui_settimercount.h"

SetTimerCount::SetTimerCount(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetTimerCount)
{
    ui->setupUi(this);

    ui->lineEdit->setFrame(QFrame::NoFrame);

    ui->horizontalSlider->setMinimum(1000);
    ui->horizontalSlider->setMaximum(10000);
    ui->horizontalSlider->setSingleStep(1000);
}

SetTimerCount::~SetTimerCount(){

    delete ui;
}

void SetTimerCount::setValue(int timer_count_){

    timer_count = timer_count_;
    ui->horizontalSlider->setValue(timer_count);
    ui->lineEdit->setText(QString::number(ui->horizontalSlider->value()) + " ms");
}

void SetTimerCount::on_horizontalSlider_actionTriggered(){

    ui->lineEdit->setText(QString::number(ui->horizontalSlider->value()) + " ms");
}


void SetTimerCount::on_pushButton_Ok_clicked(){

    emit returnValue(ui->horizontalSlider->value());
}

