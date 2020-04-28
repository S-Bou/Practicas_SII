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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QPushButton *pushButton_Alarma;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QSpinBox *spinBox_Horas;
    QSpinBox *spinBox_Minutos;
    QPushButton *pushButton_EstablecerAlarma;
    QPushButton *pushButton_DesdactivarAlarma;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox_Segundos;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(467, 301);
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
        pushButton_Alarma = new QPushButton(centralwidget);
        pushButton_Alarma->setObjectName(QString::fromUtf8("pushButton_Alarma"));
        pushButton_Alarma->setGeometry(QRect(370, 10, 80, 21));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 441, 231));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(false);
        groupBox->setGeometry(QRect(10, 150, 441, 121));
        spinBox_Horas = new QSpinBox(groupBox);
        spinBox_Horas->setObjectName(QString::fromUtf8("spinBox_Horas"));
        spinBox_Horas->setGeometry(QRect(100, 30, 42, 22));
        spinBox_Horas->setMaximum(23);
        spinBox_Minutos = new QSpinBox(groupBox);
        spinBox_Minutos->setObjectName(QString::fromUtf8("spinBox_Minutos"));
        spinBox_Minutos->setGeometry(QRect(100, 60, 42, 22));
        spinBox_Minutos->setMaximum(59);
        pushButton_EstablecerAlarma = new QPushButton(groupBox);
        pushButton_EstablecerAlarma->setObjectName(QString::fromUtf8("pushButton_EstablecerAlarma"));
        pushButton_EstablecerAlarma->setGeometry(QRect(210, 30, 111, 31));
        pushButton_DesdactivarAlarma = new QPushButton(groupBox);
        pushButton_DesdactivarAlarma->setObjectName(QString::fromUtf8("pushButton_DesdactivarAlarma"));
        pushButton_DesdactivarAlarma->setGeometry(QRect(210, 80, 111, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 61, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 61, 16));
        label_2->setFont(font);
        spinBox_Segundos = new QSpinBox(groupBox);
        spinBox_Segundos->setObjectName(QString::fromUtf8("spinBox_Segundos"));
        spinBox_Segundos->setGeometry(QRect(100, 90, 42, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 71, 16));
        label_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        pushButton_Hora_Fecha->raise();
        pushButton_Hora->raise();
        pushButton_Fecha->raise();
        pushButton_Dia->raise();
        pushButton_Alarma->raise();
        listWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 467, 20));
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
        pushButton_Alarma->setText(QCoreApplication::translate("MainWindow", "Alarma", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Alarma", nullptr));
        pushButton_EstablecerAlarma->setText(QCoreApplication::translate("MainWindow", "Establecer Alarma", nullptr));
        pushButton_DesdactivarAlarma->setText(QCoreApplication::translate("MainWindow", "Desactivar Alarma", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Horas", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Minutos", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Segundos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
