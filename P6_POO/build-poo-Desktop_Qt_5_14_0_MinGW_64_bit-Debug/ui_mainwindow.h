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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_CrearPoligono;
    QLabel *label_NumeroLados;
    QLabel *label_NumeroLado;
    QLabel *label_Longitud;
    QPushButton *pushButton_DefinirLado;
    QPlainTextEdit *plainTextEdit_Propiedades;
    QPushButton *pushButton_Propiedades;
    QGroupBox *groupBox_Triangulo;
    QLabel *label_3;
    QPushButton *pushButton_CrearTriangulo;
    QLabel *label_CatetoDos;
    QLabel *label_CatetoUno;
    QPlainTextEdit *plainTextEdit_Triangulo;
    QSpinBox *spinBox_CatetoUno;
    QSpinBox *spinBox_CatetoDos;
    QSpinBox *spinBox_Hipotenusa;
    QGroupBox *groupBox_Cuadrado;
    QPushButton *pushButton_CrearCuadrado;
    QSpinBox *spinBox_LadoCuadrado;
    QLabel *label_Cuadrado;
    QPlainTextEdit *plainTextEdit_Cuadrado;
    QSpinBox *spinBox_NumeroLado;
    QSpinBox *spinBox_LongitudLado;
    QSpinBox *spinBox_NumeroLados;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(722, 449);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_CrearPoligono = new QPushButton(centralwidget);
        pushButton_CrearPoligono->setObjectName(QString::fromUtf8("pushButton_CrearPoligono"));
        pushButton_CrearPoligono->setGeometry(QRect(60, 70, 111, 31));
        label_NumeroLados = new QLabel(centralwidget);
        label_NumeroLados->setObjectName(QString::fromUtf8("label_NumeroLados"));
        label_NumeroLados->setGeometry(QRect(50, 10, 141, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_NumeroLados->setFont(font);
        label_NumeroLado = new QLabel(centralwidget);
        label_NumeroLado->setObjectName(QString::fromUtf8("label_NumeroLado"));
        label_NumeroLado->setGeometry(QRect(20, 110, 101, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_NumeroLado->setFont(font1);
        label_Longitud = new QLabel(centralwidget);
        label_Longitud->setObjectName(QString::fromUtf8("label_Longitud"));
        label_Longitud->setGeometry(QRect(140, 110, 61, 21));
        QFont font2;
        font2.setPointSize(10);
        label_Longitud->setFont(font2);
        pushButton_DefinirLado = new QPushButton(centralwidget);
        pushButton_DefinirLado->setObjectName(QString::fromUtf8("pushButton_DefinirLado"));
        pushButton_DefinirLado->setGeometry(QRect(60, 180, 111, 31));
        plainTextEdit_Propiedades = new QPlainTextEdit(centralwidget);
        plainTextEdit_Propiedades->setObjectName(QString::fromUtf8("plainTextEdit_Propiedades"));
        plainTextEdit_Propiedades->setGeometry(QRect(20, 270, 191, 131));
        pushButton_Propiedades = new QPushButton(centralwidget);
        pushButton_Propiedades->setObjectName(QString::fromUtf8("pushButton_Propiedades"));
        pushButton_Propiedades->setGeometry(QRect(60, 230, 111, 31));
        groupBox_Triangulo = new QGroupBox(centralwidget);
        groupBox_Triangulo->setObjectName(QString::fromUtf8("groupBox_Triangulo"));
        groupBox_Triangulo->setGeometry(QRect(220, 10, 481, 201));
        groupBox_Triangulo->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 153, 153);"));
        label_3 = new QLabel(groupBox_Triangulo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 120, 71, 31));
        label_3->setFont(font2);
        pushButton_CrearTriangulo = new QPushButton(groupBox_Triangulo);
        pushButton_CrearTriangulo->setObjectName(QString::fromUtf8("pushButton_CrearTriangulo"));
        pushButton_CrearTriangulo->setGeometry(QRect(30, 160, 141, 31));
        label_CatetoDos = new QLabel(groupBox_Triangulo);
        label_CatetoDos->setObjectName(QString::fromUtf8("label_CatetoDos"));
        label_CatetoDos->setGeometry(QRect(40, 80, 61, 31));
        QFont font3;
        font3.setPointSize(12);
        label_CatetoDos->setFont(font3);
        label_CatetoUno = new QLabel(groupBox_Triangulo);
        label_CatetoUno->setObjectName(QString::fromUtf8("label_CatetoUno"));
        label_CatetoUno->setGeometry(QRect(40, 40, 61, 31));
        label_CatetoUno->setFont(font3);
        plainTextEdit_Triangulo = new QPlainTextEdit(groupBox_Triangulo);
        plainTextEdit_Triangulo->setObjectName(QString::fromUtf8("plainTextEdit_Triangulo"));
        plainTextEdit_Triangulo->setGeometry(QRect(190, 30, 281, 151));
        plainTextEdit_Triangulo->setFont(font2);
        spinBox_CatetoUno = new QSpinBox(groupBox_Triangulo);
        spinBox_CatetoUno->setObjectName(QString::fromUtf8("spinBox_CatetoUno"));
        spinBox_CatetoUno->setGeometry(QRect(110, 40, 61, 31));
        spinBox_CatetoUno->setFont(font3);
        spinBox_CatetoUno->setStyleSheet(QString::fromUtf8(""));
        spinBox_CatetoUno->setValue(1);
        spinBox_CatetoDos = new QSpinBox(groupBox_Triangulo);
        spinBox_CatetoDos->setObjectName(QString::fromUtf8("spinBox_CatetoDos"));
        spinBox_CatetoDos->setGeometry(QRect(110, 80, 61, 31));
        spinBox_CatetoDos->setFont(font3);
        spinBox_CatetoDos->setValue(1);
        spinBox_Hipotenusa = new QSpinBox(groupBox_Triangulo);
        spinBox_Hipotenusa->setObjectName(QString::fromUtf8("spinBox_Hipotenusa"));
        spinBox_Hipotenusa->setGeometry(QRect(110, 120, 61, 31));
        spinBox_Hipotenusa->setFont(font3);
        spinBox_Hipotenusa->setValue(1);
        groupBox_Cuadrado = new QGroupBox(centralwidget);
        groupBox_Cuadrado->setObjectName(QString::fromUtf8("groupBox_Cuadrado"));
        groupBox_Cuadrado->setGeometry(QRect(220, 220, 481, 191));
        groupBox_Cuadrado->setAutoFillBackground(false);
        groupBox_Cuadrado->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 136, 136);"));
        pushButton_CrearCuadrado = new QPushButton(groupBox_Cuadrado);
        pushButton_CrearCuadrado->setObjectName(QString::fromUtf8("pushButton_CrearCuadrado"));
        pushButton_CrearCuadrado->setGeometry(QRect(20, 130, 141, 31));
        pushButton_CrearCuadrado->setAutoFillBackground(false);
        pushButton_CrearCuadrado->setStyleSheet(QString::fromUtf8(""));
        pushButton_CrearCuadrado->setAutoDefault(false);
        pushButton_CrearCuadrado->setFlat(false);
        spinBox_LadoCuadrado = new QSpinBox(groupBox_Cuadrado);
        spinBox_LadoCuadrado->setObjectName(QString::fromUtf8("spinBox_LadoCuadrado"));
        spinBox_LadoCuadrado->setGeometry(QRect(60, 80, 71, 31));
        spinBox_LadoCuadrado->setFont(font3);
        spinBox_LadoCuadrado->setStyleSheet(QString::fromUtf8(""));
        spinBox_LadoCuadrado->setValue(1);
        label_Cuadrado = new QLabel(groupBox_Cuadrado);
        label_Cuadrado->setObjectName(QString::fromUtf8("label_Cuadrado"));
        label_Cuadrado->setGeometry(QRect(20, 50, 161, 21));
        label_Cuadrado->setFont(font3);
        plainTextEdit_Cuadrado = new QPlainTextEdit(groupBox_Cuadrado);
        plainTextEdit_Cuadrado->setObjectName(QString::fromUtf8("plainTextEdit_Cuadrado"));
        plainTextEdit_Cuadrado->setGeometry(QRect(190, 30, 281, 151));
        plainTextEdit_Cuadrado->setFont(font2);
        plainTextEdit_Cuadrado->setStyleSheet(QString::fromUtf8(""));
        spinBox_NumeroLado = new QSpinBox(centralwidget);
        spinBox_NumeroLado->setObjectName(QString::fromUtf8("spinBox_NumeroLado"));
        spinBox_NumeroLado->setGeometry(QRect(40, 140, 51, 31));
        spinBox_NumeroLado->setFont(font3);
        spinBox_NumeroLado->setValue(1);
        spinBox_LongitudLado = new QSpinBox(centralwidget);
        spinBox_LongitudLado->setObjectName(QString::fromUtf8("spinBox_LongitudLado"));
        spinBox_LongitudLado->setGeometry(QRect(130, 140, 71, 31));
        spinBox_LongitudLado->setFont(font3);
        spinBox_LongitudLado->setValue(1);
        spinBox_NumeroLados = new QSpinBox(centralwidget);
        spinBox_NumeroLados->setObjectName(QString::fromUtf8("spinBox_NumeroLados"));
        spinBox_NumeroLados->setGeometry(QRect(90, 40, 61, 21));
        spinBox_NumeroLados->setFont(font3);
        spinBox_NumeroLados->setValue(4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 722, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_CrearCuadrado->setDefault(false);


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
        label_CatetoDos->setText(QCoreApplication::translate("MainWindow", "Cateto 2", nullptr));
        label_CatetoUno->setText(QCoreApplication::translate("MainWindow", "Cateto 1", nullptr));
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
