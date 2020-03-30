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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget_Documentos;
    QPlainTextEdit *plainTextEdit_Datos;
    QLabel *label;
    QPushButton *pushButton_AnyadirDoc;
    QLabel *label_2;
    QComboBox *comboBox_Sexo;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit_Nacionalidad;
    QLineEdit *lineEdit_Nombre;
    QLineEdit *lineEdit_NumDoc;
    QLineEdit *lineEdit_Apellidos;
    QLabel *label_5;
    QComboBox *comboBox_TipoDoc;
    QLabel *label_4;
    QLabel *label_7;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(592, 413);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget_Documentos = new QListWidget(centralwidget);
        listWidget_Documentos->setObjectName(QString::fromUtf8("listWidget_Documentos"));
        listWidget_Documentos->setGeometry(QRect(290, 10, 291, 171));
        plainTextEdit_Datos = new QPlainTextEdit(centralwidget);
        plainTextEdit_Datos->setObjectName(QString::fromUtf8("plainTextEdit_Datos"));
        plainTextEdit_Datos->setGeometry(QRect(290, 190, 291, 191));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 251, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton_AnyadirDoc = new QPushButton(centralwidget);
        pushButton_AnyadirDoc->setObjectName(QString::fromUtf8("pushButton_AnyadirDoc"));
        pushButton_AnyadirDoc->setGeometry(QRect(120, 260, 101, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 130, 47, 13));
        comboBox_Sexo = new QComboBox(centralwidget);
        comboBox_Sexo->addItem(QString());
        comboBox_Sexo->addItem(QString());
        comboBox_Sexo->addItem(QString());
        comboBox_Sexo->setObjectName(QString::fromUtf8("comboBox_Sexo"));
        comboBox_Sexo->setGeometry(QRect(140, 100, 72, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 160, 47, 13));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 220, 61, 16));
        lineEdit_Nacionalidad = new QLineEdit(centralwidget);
        lineEdit_Nacionalidad->setObjectName(QString::fromUtf8("lineEdit_Nacionalidad"));
        lineEdit_Nacionalidad->setGeometry(QRect(100, 190, 141, 21));
        lineEdit_Nombre = new QLineEdit(centralwidget);
        lineEdit_Nombre->setObjectName(QString::fromUtf8("lineEdit_Nombre"));
        lineEdit_Nombre->setGeometry(QRect(100, 130, 141, 21));
        lineEdit_NumDoc = new QLineEdit(centralwidget);
        lineEdit_NumDoc->setObjectName(QString::fromUtf8("lineEdit_NumDoc"));
        lineEdit_NumDoc->setGeometry(QRect(100, 220, 141, 21));
        lineEdit_Apellidos = new QLineEdit(centralwidget);
        lineEdit_Apellidos->setObjectName(QString::fromUtf8("lineEdit_Apellidos"));
        lineEdit_Apellidos->setGeometry(QRect(100, 160, 141, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 190, 47, 13));
        comboBox_TipoDoc = new QComboBox(centralwidget);
        comboBox_TipoDoc->addItem(QString());
        comboBox_TipoDoc->addItem(QString());
        comboBox_TipoDoc->addItem(QString());
        comboBox_TipoDoc->setObjectName(QString::fromUtf8("comboBox_TipoDoc"));
        comboBox_TipoDoc->setGeometry(QRect(140, 70, 72, 22));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 70, 101, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 100, 47, 13));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 592, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Registro de documento", nullptr));
        pushButton_AnyadirDoc->setText(QCoreApplication::translate("MainWindow", "A\303\261adir documento", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        comboBox_Sexo->setItemText(0, QCoreApplication::translate("MainWindow", "M / H", nullptr));
        comboBox_Sexo->setItemText(1, QCoreApplication::translate("MainWindow", "Mujer", nullptr));
        comboBox_Sexo->setItemText(2, QCoreApplication::translate("MainWindow", "Hombre", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Apellidos:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "N\303\272mero:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nacionalidad:", nullptr));
        comboBox_TipoDoc->setItemText(0, QCoreApplication::translate("MainWindow", "DNI / NIE", nullptr));
        comboBox_TipoDoc->setItemText(1, QCoreApplication::translate("MainWindow", "DNI", nullptr));
        comboBox_TipoDoc->setItemText(2, QCoreApplication::translate("MainWindow", "NIE", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Tipo de documento:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Sexo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
