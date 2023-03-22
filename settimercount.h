#ifndef SETTIMERCOUNT_H
#define SETTIMERCOUNT_H

#include <QWidget>
#include <QString>

namespace Ui {
class SetTimerCount;
}

class SetTimerCount : public QWidget
{
    Q_OBJECT

public:
    SetTimerCount(QWidget *parent = nullptr);
    ~SetTimerCount();
    void setValue(int timer_count_);

private:
    Ui::SetTimerCount *ui;
    int timer_count;

private slots:
    void on_horizontalSlider_actionTriggered();

    void on_pushButton_Ok_clicked();

signals:
    void returnValue(int);
};

#endif // SETTIMERCOUNT_H
