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
    QLabel *labelOne;
    QPushButton *pushButtonCalcular;
    QLineEdit *lineEditLadoOne;
    QLineEdit *lineEditLadoTwo;
    QLineEdit *lineEditArea;
    QLabel *labelLadoUno;
    QLabel *labelLadoDos;
    QPushButton *pushButtonCerrar;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;
    QLabel *labelXOneInit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *labelRect;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(785, 515);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(760, 460));
        QPalette palette;
        QBrush brush(QColor(200, 198, 199, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        QBrush brush1(QColor(170, 255, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        QBrush brush2(QColor(51, 51, 51, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(85, 170, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        MainWindow->setPalette(palette);
        MainWindow->setMouseTracking(false);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelOne = new QLabel(centralwidget);
        labelOne->setObjectName(QString::fromUtf8("labelOne"));
        labelOne->setGeometry(QRect(40, 20, 670, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        labelOne->setFont(font);
        pushButtonCalcular = new QPushButton(centralwidget);
        pushButtonCalcular->setObjectName(QString::fromUtf8("pushButtonCalcular"));
        pushButtonCalcular->setGeometry(QRect(40, 310, 150, 50));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonCalcular->setFont(font1);
        lineEditLadoOne = new QLineEdit(centralwidget);
        lineEditLadoOne->setObjectName(QString::fromUtf8("lineEditLadoOne"));
        lineEditLadoOne->setGeometry(QRect(40, 130, 150, 50));
        lineEditLadoOne->setFont(font1);
        lineEditLadoTwo = new QLineEdit(centralwidget);
        lineEditLadoTwo->setObjectName(QString::fromUtf8("lineEditLadoTwo"));
        lineEditLadoTwo->setGeometry(QRect(40, 230, 150, 50));
        lineEditLadoTwo->setFont(font1);
        lineEditArea = new QLineEdit(centralwidget);
        lineEditArea->setObjectName(QString::fromUtf8("lineEditArea"));
        lineEditArea->setGeometry(QRect(40, 370, 150, 50));
        lineEditArea->setFont(font1);
        labelLadoUno = new QLabel(centralwidget);
        labelLadoUno->setObjectName(QString::fromUtf8("labelLadoUno"));
        labelLadoUno->setGeometry(QRect(40, 100, 100, 20));
        labelLadoUno->setFont(font1);
        labelLadoDos = new QLabel(centralwidget);
        labelLadoDos->setObjectName(QString::fromUtf8("labelLadoDos"));
        labelLadoDos->setGeometry(QRect(40, 200, 100, 20));
        labelLadoDos->setFont(font1);
        pushButtonCerrar = new QPushButton(centralwidget);
        pushButtonCerrar->setObjectName(QString::fromUtf8("pushButtonCerrar"));
        pushButtonCerrar->setGeometry(QRect(550, 370, 150, 50));
        QPalette palette1;
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush5(QColor(85, 85, 127, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(85, 255, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(170, 255, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        pushButtonCerrar->setPalette(palette1);
        pushButtonCerrar->setFont(font1);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(300, 110, 401, 20));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(270, 140, 20, 201));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(100);
        verticalSlider->setValue(1);
        verticalSlider->setSliderPosition(1);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedAppearance(true);
        labelXOneInit = new QLabel(centralwidget);
        labelXOneInit->setObjectName(QString::fromUtf8("labelXOneInit"));
        labelXOneInit->setGeometry(QRect(300, 90, 31, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(470, 90, 47, 14));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(690, 90, 47, 14));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 140, 20, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 230, 47, 14));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 330, 31, 16));
        labelRect = new QLabel(centralwidget);
        labelRect->setObjectName(QString::fromUtf8("labelRect"));
        labelRect->setGeometry(QRect(300, 140, 1, 1));
        QPalette palette2;
        QBrush brush8(QColor(0, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush8);
        QBrush brush9(QColor(255, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush9);
        QBrush brush10(QColor(170, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        QBrush brush11(QColor(85, 255, 127, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        labelRect->setPalette(palette2);
        labelRect->setAutoFillBackground(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 370, 150, 50));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 785, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calcular el \303\241rea de rectangulo", nullptr));
        labelOne->setText(QCoreApplication::translate("MainWindow", "Introducir el lado 1 y el lado 2 para averiguar el \303\241rea de un rect\303\241ngulo.", nullptr));
        pushButtonCalcular->setText(QCoreApplication::translate("MainWindow", "Calcular \303\241rea", nullptr));
        labelLadoUno->setText(QCoreApplication::translate("MainWindow", "Lado 1", nullptr));
        labelLadoDos->setText(QCoreApplication::translate("MainWindow", "Lado 2", nullptr));
        pushButtonCerrar->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
        labelXOneInit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Lado 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Lado 2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        labelRect->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Borrar datos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
