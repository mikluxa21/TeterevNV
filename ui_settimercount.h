/********************************************************************************
** Form generated from reading UI file 'settimercount.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIMERCOUNT_H
#define UI_SETTIMERCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetTimerCount
{
public:
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Ok;

    void setupUi(QWidget *SetTimerCount)
    {
        if (SetTimerCount->objectName().isEmpty())
            SetTimerCount->setObjectName("SetTimerCount");
        SetTimerCount->resize(343, 62);
        horizontalSlider = new QSlider(SetTimerCount);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 30, 160, 18));
        horizontalSlider->setMinimum(100);
        horizontalSlider->setMaximum(1000);
        horizontalSlider->setSingleStep(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(SetTimerCount);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(180, 20, 51, 25));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: TRANSPARENT;\n"
"border-color: 0;"));
        lineEdit->setReadOnly(true);
        pushButton_Ok = new QPushButton(SetTimerCount);
        pushButton_Ok->setObjectName("pushButton_Ok");
        pushButton_Ok->setGeometry(QRect(252, 20, 71, 29));

        retranslateUi(SetTimerCount);

        QMetaObject::connectSlotsByName(SetTimerCount);
    } // setupUi

    void retranslateUi(QWidget *SetTimerCount)
    {
        SetTimerCount->setWindowTitle(QCoreApplication::translate("SetTimerCount", "Form", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("SetTimerCount", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetTimerCount: public Ui_SetTimerCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIMERCOUNT_H
