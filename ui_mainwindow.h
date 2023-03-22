/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Timer;
    QAction *action_Dir;
    QWidget *centralwidget;
    QLineEdit *lineEdit_y;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_x;
    QPushButton *pushButton_Start;
    QTextEdit *textEdit_3;
    QLineEdit *lineEdit_way;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(850, 600);
        MainWindow->setMinimumSize(QSize(850, 600));
        MainWindow->setMaximumSize(QSize(850, 600));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        action_Timer = new QAction(MainWindow);
        action_Timer->setObjectName("action_Timer");
        action_Dir = new QAction(MainWindow);
        action_Dir->setObjectName("action_Dir");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_y = new QLineEdit(centralwidget);
        lineEdit_y->setObjectName("lineEdit_y");
        lineEdit_y->setGeometry(QRect(690, 110, 113, 25));
        lineEdit_y->setReadOnly(true);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(690, 80, 111, 31));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color: TRANSPARENT;"));
        textEdit_2->setReadOnly(true);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(690, 0, 111, 31));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: TRANSPARENT;"));
        textEdit->setReadOnly(true);
        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName("lineEdit_x");
        lineEdit_x->setGeometry(QRect(690, 30, 113, 25));
        lineEdit_x->setReadOnly(true);
        pushButton_Start = new QPushButton(centralwidget);
        pushButton_Start->setObjectName("pushButton_Start");
        pushButton_Start->setGeometry(QRect(690, 240, 111, 31));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(690, 160, 111, 31));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color: TRANSPARENT;"));
        textEdit_3->setReadOnly(true);
        lineEdit_way = new QLineEdit(centralwidget);
        lineEdit_way->setObjectName("lineEdit_way");
        lineEdit_way->setGeometry(QRect(690, 190, 113, 25));
        lineEdit_way->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 850, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action_Timer);
        menu->addAction(action_Dir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Timer->setText(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\271\320\274\320\265\321\200", nullptr));
        action_Dir->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\200\320\265\320\272\321\202\320\276\321\200\320\270\321\217", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\277\320\276\320\267\320\270\321\206\320\270\321\217 y:</p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\277\320\276\320\267\320\270\321\206\320\270\321\217 x:</p></body></html>", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\321\203\321\202\321\214 \320\262 pixel:</p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
