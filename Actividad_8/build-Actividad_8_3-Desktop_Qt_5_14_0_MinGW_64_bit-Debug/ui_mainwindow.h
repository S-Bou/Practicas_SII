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
    QPushButton *pushButton_EstablecerAlarma;
    QPushButton *pushButton_DesdactivarAlarma;
    QLabel *label;
    QSpinBox *spinBox_HorasUnidades;
    QSpinBox *spinBox_MinutosDecenas;
    QLabel *label_2;
    QSpinBox *spinBox_HorasDecenas;
    QSpinBox *spinBox_MinutosUnidades;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(465, 300);
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
        pushButton_EstablecerAlarma = new QPushButton(groupBox);
        pushButton_EstablecerAlarma->setObjectName(QString::fromUtf8("pushButton_EstablecerAlarma"));
        pushButton_EstablecerAlarma->setGeometry(QRect(280, 30, 111, 31));
        pushButton_DesdactivarAlarma = new QPushButton(groupBox);
        pushButton_DesdactivarAlarma->setObjectName(QString::fromUtf8("pushButton_DesdactivarAlarma"));
        pushButton_DesdactivarAlarma->setGeometry(QRect(280, 70, 111, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 201, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        spinBox_HorasUnidades = new QSpinBox(groupBox);
        spinBox_HorasUnidades->setObjectName(QString::fromUtf8("spinBox_HorasUnidades"));
        spinBox_HorasUnidades->setGeometry(QRect(80, 60, 41, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        spinBox_HorasUnidades->setFont(font1);
        spinBox_HorasUnidades->setMaximum(9);
        spinBox_MinutosDecenas = new QSpinBox(groupBox);
        spinBox_MinutosDecenas->setObjectName(QString::fromUtf8("spinBox_MinutosDecenas"));
        spinBox_MinutosDecenas->setGeometry(QRect(140, 60, 41, 41));
        spinBox_MinutosDecenas->setFont(font1);
        spinBox_MinutosDecenas->setMaximum(5);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 60, 16, 31));
        QFont font2;
        font2.setPointSize(24);
        label_2->setFont(font2);
        spinBox_HorasDecenas = new QSpinBox(groupBox);
        spinBox_HorasDecenas->setObjectName(QString::fromUtf8("spinBox_HorasDecenas"));
        spinBox_HorasDecenas->setGeometry(QRect(40, 60, 41, 41));
        spinBox_HorasDecenas->setFont(font1);
        spinBox_HorasDecenas->setMaximum(2);
        spinBox_MinutosUnidades = new QSpinBox(groupBox);
        spinBox_MinutosUnidades->setObjectName(QString::fromUtf8("spinBox_MinutosUnidades"));
        spinBox_MinutosUnidades->setGeometry(QRect(180, 60, 41, 41));
        spinBox_MinutosUnidades->setFont(font1);
        spinBox_MinutosUnidades->setMaximum(9);
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Cliente 3.0", nullptr));
        pushButton_Hora_Fecha->setText(QCoreApplication::translate("MainWindow", "Hora y Fecha", nullptr));
        pushButton_Hora->setText(QCoreApplication::translate("MainWindow", "Hora", nullptr));
        pushButton_Fecha->setText(QCoreApplication::translate("MainWindow", "Fecha", nullptr));
        pushButton_Dia->setText(QCoreApplication::translate("MainWindow", "D\303\255a de semana", nullptr));
        pushButton_Alarma->setText(QCoreApplication::translate("MainWindow", "Alarma", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Alarma", nullptr));
        pushButton_EstablecerAlarma->setText(QCoreApplication::translate("MainWindow", "Establecer Alarma", nullptr));
        pushButton_DesdactivarAlarma->setText(QCoreApplication::translate("MainWindow", "Desactivar Alarma", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Establezca aqu\303\255 la hora que desee\n"
"con el siguiente formato: hh:mm", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
