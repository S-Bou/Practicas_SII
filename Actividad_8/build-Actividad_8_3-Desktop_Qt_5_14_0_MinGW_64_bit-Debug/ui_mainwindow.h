/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_Hora_Fecha;
    QPushButton *pushButton_Hora;
    QPushButton *pushButton_Fecha;
    QPushButton *pushButton_Dia;
    QPushButton *pushButton_5;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(465, 337);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_Hora_Fecha = new QPushButton(centralwidget);
        pushButton_Hora_Fecha->setObjectName(QString::fromUtf8("pushButton_Hora_Fecha"));
        pushButton_Hora_Fecha->setGeometry(QRect(10, 10, 80, 21));
        pushButton_Hora = new QPushButton(centralwidget);
        pushButton_Hora->setObjectName(QString::fromUtf8("pushButton_Hora"));
        pushButton_Hora->setGeometry(QRect(100, 10, 80, 21));
        pushButton_Fecha = new QPushButton(centralwidget);
        pushButton_Fecha->setObjectName(QString::fromUtf8("pushButton_Fecha"));
        pushButton_Fecha->setGeometry(QRect(190, 10, 80, 21));
        pushButton_Dia = new QPushButton(centralwidget);
        pushButton_Dia->setObjectName(QString::fromUtf8("pushButton_Dia"));
        pushButton_Dia->setGeometry(QRect(280, 10, 80, 21));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 10, 80, 21));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 441, 251));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 465, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Hora_Fecha->setText(QCoreApplication::translate("MainWindow", "Hora y Fecha", nullptr));
        pushButton_Hora->setText(QCoreApplication::translate("MainWindow", "Hora", nullptr));
        pushButton_Fecha->setText(QCoreApplication::translate("MainWindow", "Fecha", nullptr));
        pushButton_Dia->setText(QCoreApplication::translate("MainWindow", "D\303\255a de semana", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
