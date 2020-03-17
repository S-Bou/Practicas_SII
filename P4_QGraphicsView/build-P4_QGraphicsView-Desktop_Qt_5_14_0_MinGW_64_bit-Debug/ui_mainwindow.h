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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButtonInsertar;
    QSlider *horizontalSliderX;
    QSlider *horizontalSliderY;
    QSlider *horizontalSliderWidth;
    QSlider *horizontalSliderHeight;
    QLabel *labelEjeX;
    QLabel *labelEjeY;
    QLabel *labelWidth;
    QLabel *labelHeight;
    QPushButton *pushButtonInsertarGrupo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(682, 495);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 411, 441));
        pushButtonInsertar = new QPushButton(centralwidget);
        pushButtonInsertar->setObjectName(QString::fromUtf8("pushButtonInsertar"));
        pushButtonInsertar->setGeometry(QRect(440, 10, 80, 22));
        horizontalSliderX = new QSlider(centralwidget);
        horizontalSliderX->setObjectName(QString::fromUtf8("horizontalSliderX"));
        horizontalSliderX->setGeometry(QRect(440, 50, 160, 16));
        horizontalSliderX->setMinimum(-150);
        horizontalSliderX->setMaximum(150);
        horizontalSliderX->setTracking(true);
        horizontalSliderX->setOrientation(Qt::Horizontal);
        horizontalSliderY = new QSlider(centralwidget);
        horizontalSliderY->setObjectName(QString::fromUtf8("horizontalSliderY"));
        horizontalSliderY->setGeometry(QRect(440, 80, 160, 16));
        horizontalSliderY->setMinimum(-150);
        horizontalSliderY->setMaximum(150);
        horizontalSliderY->setOrientation(Qt::Horizontal);
        horizontalSliderWidth = new QSlider(centralwidget);
        horizontalSliderWidth->setObjectName(QString::fromUtf8("horizontalSliderWidth"));
        horizontalSliderWidth->setGeometry(QRect(440, 110, 160, 16));
        horizontalSliderWidth->setValue(10);
        horizontalSliderWidth->setOrientation(Qt::Horizontal);
        horizontalSliderHeight = new QSlider(centralwidget);
        horizontalSliderHeight->setObjectName(QString::fromUtf8("horizontalSliderHeight"));
        horizontalSliderHeight->setGeometry(QRect(440, 140, 160, 16));
        horizontalSliderHeight->setValue(10);
        horizontalSliderHeight->setOrientation(Qt::Horizontal);
        labelEjeX = new QLabel(centralwidget);
        labelEjeX->setObjectName(QString::fromUtf8("labelEjeX"));
        labelEjeX->setGeometry(QRect(610, 50, 41, 16));
        labelEjeY = new QLabel(centralwidget);
        labelEjeY->setObjectName(QString::fromUtf8("labelEjeY"));
        labelEjeY->setGeometry(QRect(610, 80, 47, 14));
        labelWidth = new QLabel(centralwidget);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));
        labelWidth->setGeometry(QRect(610, 110, 81, 16));
        labelHeight = new QLabel(centralwidget);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));
        labelHeight->setGeometry(QRect(610, 140, 81, 16));
        pushButtonInsertarGrupo = new QPushButton(centralwidget);
        pushButtonInsertarGrupo->setObjectName(QString::fromUtf8("pushButtonInsertarGrupo"));
        pushButtonInsertarGrupo->setGeometry(QRect(530, 10, 80, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 682, 21));
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
        pushButtonInsertar->setText(QCoreApplication::translate("MainWindow", "Insertar", nullptr));
        labelEjeX->setText(QCoreApplication::translate("MainWindow", "X = 0", nullptr));
        labelEjeY->setText(QCoreApplication::translate("MainWindow", "Y = 0", nullptr));
        labelWidth->setText(QCoreApplication::translate("MainWindow", "Width=10", nullptr));
        labelHeight->setText(QCoreApplication::translate("MainWindow", "Height=10", nullptr));
        pushButtonInsertarGrupo->setText(QCoreApplication::translate("MainWindow", "Insertar Grupo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
