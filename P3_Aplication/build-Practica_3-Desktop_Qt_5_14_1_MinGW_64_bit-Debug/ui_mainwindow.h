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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionCerrar;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QAction *actionSalir;
    QAction *actionAcerca_de;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QCheckBox *checkBoxRun;
    QGroupBox *groupBoxModo;
    QRadioButton *radioButtonManual;
    QRadioButton *radioButtonAutomatico;
    QSpinBox *spinBoxHz;
    QWidget *tab_2;
    QWidget *tab_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QWidget *tab_5;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuAyuda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        actionNuevo = new QAction(MainWindow);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionGuardar_como = new QAction(MainWindow);
        actionGuardar_como->setObjectName(QString::fromUtf8("actionGuardar_como"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionAcerca_de = new QAction(MainWindow);
        actionAcerca_de->setObjectName(QString::fromUtf8("actionAcerca_de"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(16, 9, 571, 351));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        checkBoxRun = new QCheckBox(tab);
        checkBoxRun->setObjectName(QString::fromUtf8("checkBoxRun"));
        checkBoxRun->setGeometry(QRect(20, 20, 72, 20));
        checkBoxRun->setChecked(false);
        groupBoxModo = new QGroupBox(tab);
        groupBoxModo->setObjectName(QString::fromUtf8("groupBoxModo"));
        groupBoxModo->setGeometry(QRect(20, 60, 120, 91));
        radioButtonManual = new QRadioButton(groupBoxModo);
        radioButtonManual->setObjectName(QString::fromUtf8("radioButtonManual"));
        radioButtonManual->setGeometry(QRect(10, 30, 85, 20));
        radioButtonManual->setChecked(true);
        radioButtonAutomatico = new QRadioButton(groupBoxModo);
        radioButtonAutomatico->setObjectName(QString::fromUtf8("radioButtonAutomatico"));
        radioButtonAutomatico->setGeometry(QRect(10, 60, 85, 20));
        spinBoxHz = new QSpinBox(tab);
        spinBoxHz->setObjectName(QString::fromUtf8("spinBoxHz"));
        spinBoxHz->setGeometry(QRect(80, 20, 61, 21));
        spinBoxHz->setMaximum(50);
        spinBoxHz->setSingleStep(5);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget_2 = new QTabWidget(tab_3);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(6, 9, 551, 301));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget_2->addTab(tab_5, QString());
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuAyuda = new QMenu(menubar);
        menuAyuda->setObjectName(QString::fromUtf8("menuAyuda"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAyuda->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionCerrar);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_como);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuAyuda->addAction(actionAcerca_de);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Practica 3", nullptr));
        actionNuevo->setText(QCoreApplication::translate("MainWindow", "Nuevo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionCerrar->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        actionGuardar_como->setText(QCoreApplication::translate("MainWindow", "Guardar como", nullptr));
        actionSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        actionAcerca_de->setText(QCoreApplication::translate("MainWindow", "Acerca de...", nullptr));
        checkBoxRun->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        groupBoxModo->setTitle(QCoreApplication::translate("MainWindow", "Modo", nullptr));
        radioButtonManual->setText(QCoreApplication::translate("MainWindow", "Manual", nullptr));
        radioButtonAutomatico->setText(QCoreApplication::translate("MainWindow", "Autom\303\241tico", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Configuraci\303\263n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Control", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Fichero de texto", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Consulta SQL", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Registro", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuAyuda->setTitle(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
