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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget_personal;
    QPlainTextEdit *plainTextEdit_detalles;
    QWidget *tab_2;
    QLineEdit *lineEdit_NI;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_Nombre;
    QLineEdit *lineEdit_Apellidos;
    QLineEdit *lineEdit_Curso;
    QPlainTextEdit *plainTextEdit_Asignaturas;
    QLabel *label_5;
    QPushButton *pushButton_AnyadirAlumno;
    QWidget *tab_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 771, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidget_personal = new QListWidget(tab);
        listWidget_personal->setObjectName(QString::fromUtf8("listWidget_personal"));
        listWidget_personal->setGeometry(QRect(10, 10, 741, 201));
        plainTextEdit_detalles = new QPlainTextEdit(tab);
        plainTextEdit_detalles->setObjectName(QString::fromUtf8("plainTextEdit_detalles"));
        plainTextEdit_detalles->setGeometry(QRect(10, 220, 741, 281));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        lineEdit_NI = new QLineEdit(tab_2);
        lineEdit_NI->setObjectName(QString::fromUtf8("lineEdit_NI"));
        lineEdit_NI->setGeometry(QRect(60, 20, 131, 21));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 47, 13));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 47, 13));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 47, 13));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 31, 16));
        lineEdit_Nombre = new QLineEdit(tab_2);
        lineEdit_Nombre->setObjectName(QString::fromUtf8("lineEdit_Nombre"));
        lineEdit_Nombre->setGeometry(QRect(60, 50, 131, 21));
        lineEdit_Apellidos = new QLineEdit(tab_2);
        lineEdit_Apellidos->setObjectName(QString::fromUtf8("lineEdit_Apellidos"));
        lineEdit_Apellidos->setGeometry(QRect(60, 80, 131, 21));
        lineEdit_Curso = new QLineEdit(tab_2);
        lineEdit_Curso->setObjectName(QString::fromUtf8("lineEdit_Curso"));
        lineEdit_Curso->setGeometry(QRect(60, 110, 131, 21));
        plainTextEdit_Asignaturas = new QPlainTextEdit(tab_2);
        plainTextEdit_Asignaturas->setObjectName(QString::fromUtf8("plainTextEdit_Asignaturas"));
        plainTextEdit_Asignaturas->setGeometry(QRect(20, 210, 221, 141));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 190, 131, 16));
        pushButton_AnyadirAlumno = new QPushButton(tab_2);
        pushButton_AnyadirAlumno->setObjectName(QString::fromUtf8("pushButton_AnyadirAlumno"));
        pushButton_AnyadirAlumno->setGeometry(QRect(20, 370, 80, 21));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Lista de personal", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DNI/NIE:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Apellidos:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Curso:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Asignaturas (una por l\303\255nea)", nullptr));
        pushButton_AnyadirAlumno->setText(QCoreApplication::translate("MainWindow", "A\303\261adir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "A\303\261adir alumno", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "A\303\261adir profesor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
