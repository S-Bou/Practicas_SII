/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_CrearPoligono;
    QLineEdit *lineEdit_NumeroLados;
    QLabel *label_NumeroLados;
    QLineEdit *lineEdit_LadoNumero;
    QLineEdit *lineEdit_LongitudLado;
    QLabel *label_NumeroLado;
    QLabel *label_Longitud;
    QPushButton *pushButton_DefinirLado;
    QPlainTextEdit *plainTextEdit_Propiedades;
    QPushButton *pushButton_Propiedades;
    QGroupBox *groupBox_Triangulo;
    QLabel *label_3;
    QLineEdit *lineEdit_CatetoUno;
    QPushButton *pushButton_CrearTriangulo;
    QLabel *label_2;
    QLineEdit *lineEdit_Hipotenusa;
    QLabel *label;
    QLineEdit *lineEdit_CatetoDos;
    QPlainTextEdit *plainTextEdit_Triangulo;
    QGroupBox *groupBox_Cuadrado;
    QLineEdit *lineEdit_LadoCuadrado;
    QPushButton *pushButton_CrearCuadrado;
    QLabel *label_Cuadrado;
    QPlainTextEdit *plainTextEdit_Cuadrado;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(714, 437);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_CrearPoligono = new QPushButton(centralwidget);
        pushButton_CrearPoligono->setObjectName(QString::fromUtf8("pushButton_CrearPoligono"));
        pushButton_CrearPoligono->setGeometry(QRect(60, 70, 111, 31));
        lineEdit_NumeroLados = new QLineEdit(centralwidget);
        lineEdit_NumeroLados->setObjectName(QString::fromUtf8("lineEdit_NumeroLados"));
        lineEdit_NumeroLados->setGeometry(QRect(60, 40, 113, 21));
        label_NumeroLados = new QLabel(centralwidget);
        label_NumeroLados->setObjectName(QString::fromUtf8("label_NumeroLados"));
        label_NumeroLados->setGeometry(QRect(50, 10, 141, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_NumeroLados->setFont(font);
        lineEdit_LadoNumero = new QLineEdit(centralwidget);
        lineEdit_LadoNumero->setObjectName(QString::fromUtf8("lineEdit_LadoNumero"));
        lineEdit_LadoNumero->setGeometry(QRect(40, 140, 51, 21));
        QFont font1;
        font1.setPointSize(10);
        lineEdit_LadoNumero->setFont(font1);
        lineEdit_LongitudLado = new QLineEdit(centralwidget);
        lineEdit_LongitudLado->setObjectName(QString::fromUtf8("lineEdit_LongitudLado"));
        lineEdit_LongitudLado->setGeometry(QRect(130, 140, 61, 21));
        label_NumeroLado = new QLabel(centralwidget);
        label_NumeroLado->setObjectName(QString::fromUtf8("label_NumeroLado"));
        label_NumeroLado->setGeometry(QRect(20, 110, 101, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_NumeroLado->setFont(font2);
        label_Longitud = new QLabel(centralwidget);
        label_Longitud->setObjectName(QString::fromUtf8("label_Longitud"));
        label_Longitud->setGeometry(QRect(140, 110, 61, 21));
        label_Longitud->setFont(font1);
        pushButton_DefinirLado = new QPushButton(centralwidget);
        pushButton_DefinirLado->setObjectName(QString::fromUtf8("pushButton_DefinirLado"));
        pushButton_DefinirLado->setGeometry(QRect(60, 170, 111, 31));
        plainTextEdit_Propiedades = new QPlainTextEdit(centralwidget);
        plainTextEdit_Propiedades->setObjectName(QString::fromUtf8("plainTextEdit_Propiedades"));
        plainTextEdit_Propiedades->setGeometry(QRect(20, 270, 191, 121));
        pushButton_Propiedades = new QPushButton(centralwidget);
        pushButton_Propiedades->setObjectName(QString::fromUtf8("pushButton_Propiedades"));
        pushButton_Propiedades->setGeometry(QRect(60, 220, 111, 31));
        groupBox_Triangulo = new QGroupBox(centralwidget);
        groupBox_Triangulo->setObjectName(QString::fromUtf8("groupBox_Triangulo"));
        groupBox_Triangulo->setGeometry(QRect(220, 10, 481, 171));
        label_3 = new QLabel(groupBox_Triangulo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 100, 61, 16));
        lineEdit_CatetoUno = new QLineEdit(groupBox_Triangulo);
        lineEdit_CatetoUno->setObjectName(QString::fromUtf8("lineEdit_CatetoUno"));
        lineEdit_CatetoUno->setGeometry(QRect(100, 40, 81, 21));
        pushButton_CrearTriangulo = new QPushButton(groupBox_Triangulo);
        pushButton_CrearTriangulo->setObjectName(QString::fromUtf8("pushButton_CrearTriangulo"));
        pushButton_CrearTriangulo->setGeometry(QRect(40, 130, 141, 31));
        label_2 = new QLabel(groupBox_Triangulo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 61, 16));
        lineEdit_Hipotenusa = new QLineEdit(groupBox_Triangulo);
        lineEdit_Hipotenusa->setObjectName(QString::fromUtf8("lineEdit_Hipotenusa"));
        lineEdit_Hipotenusa->setGeometry(QRect(100, 100, 81, 21));
        label = new QLabel(groupBox_Triangulo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 61, 16));
        lineEdit_CatetoDos = new QLineEdit(groupBox_Triangulo);
        lineEdit_CatetoDos->setObjectName(QString::fromUtf8("lineEdit_CatetoDos"));
        lineEdit_CatetoDos->setGeometry(QRect(100, 70, 81, 21));
        plainTextEdit_Triangulo = new QPlainTextEdit(groupBox_Triangulo);
        plainTextEdit_Triangulo->setObjectName(QString::fromUtf8("plainTextEdit_Triangulo"));
        plainTextEdit_Triangulo->setGeometry(QRect(190, 30, 281, 131));
        groupBox_Cuadrado = new QGroupBox(centralwidget);
        groupBox_Cuadrado->setObjectName(QString::fromUtf8("groupBox_Cuadrado"));
        groupBox_Cuadrado->setGeometry(QRect(220, 190, 481, 201));
        groupBox_Cuadrado->setStyleSheet(QString::fromUtf8(""));
        lineEdit_LadoCuadrado = new QLineEdit(groupBox_Cuadrado);
        lineEdit_LadoCuadrado->setObjectName(QString::fromUtf8("lineEdit_LadoCuadrado"));
        lineEdit_LadoCuadrado->setGeometry(QRect(50, 70, 81, 21));
        pushButton_CrearCuadrado = new QPushButton(groupBox_Cuadrado);
        pushButton_CrearCuadrado->setObjectName(QString::fromUtf8("pushButton_CrearCuadrado"));
        pushButton_CrearCuadrado->setGeometry(QRect(30, 130, 141, 31));
        pushButton_CrearCuadrado->setStyleSheet(QString::fromUtf8(""));
        label_Cuadrado = new QLabel(groupBox_Cuadrado);
        label_Cuadrado->setObjectName(QString::fromUtf8("label_Cuadrado"));
        label_Cuadrado->setGeometry(QRect(40, 40, 121, 16));
        plainTextEdit_Cuadrado = new QPlainTextEdit(groupBox_Cuadrado);
        plainTextEdit_Cuadrado->setObjectName(QString::fromUtf8("plainTextEdit_Cuadrado"));
        plainTextEdit_Cuadrado->setGeometry(QRect(190, 30, 281, 161));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 714, 20));
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
        pushButton_CrearPoligono->setText(QCoreApplication::translate("MainWindow", "Crear pol\303\255gono", nullptr));
        label_NumeroLados->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de lados", nullptr));
        label_NumeroLado->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de lado", nullptr));
        label_Longitud->setText(QCoreApplication::translate("MainWindow", "Longitud", nullptr));
        pushButton_DefinirLado->setText(QCoreApplication::translate("MainWindow", "Definir lado", nullptr));
        plainTextEdit_Propiedades->setPlainText(QString());
        pushButton_Propiedades->setText(QCoreApplication::translate("MainWindow", "Propiedades", nullptr));
        groupBox_Triangulo->setTitle(QCoreApplication::translate("MainWindow", "TRI\303\201NGULO", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Hipotenusa", nullptr));
        pushButton_CrearTriangulo->setText(QCoreApplication::translate("MainWindow", "Crear tri\303\241ngulo", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Cateto 1", nullptr));
        lineEdit_Hipotenusa->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Cateto 1", nullptr));
        groupBox_Cuadrado->setTitle(QCoreApplication::translate("MainWindow", "CUADRADO", nullptr));
        pushButton_CrearCuadrado->setText(QCoreApplication::translate("MainWindow", "Crear cuadrado", nullptr));
        label_Cuadrado->setText(QCoreApplication::translate("MainWindow", "Longitud de cada lado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
