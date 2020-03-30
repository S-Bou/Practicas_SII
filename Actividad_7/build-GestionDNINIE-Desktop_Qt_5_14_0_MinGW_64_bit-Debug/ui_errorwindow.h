/********************************************************************************
** Form generated from reading UI file 'errorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWINDOW_H
#define UI_ERRORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErrorWindow
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ErrorWindow)
    {
        if (ErrorWindow->objectName().isEmpty())
            ErrorWindow->setObjectName(QString::fromUtf8("ErrorWindow"));
        ErrorWindow->resize(328, 227);
        pushButton = new QPushButton(ErrorWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 120, 111, 41));
        label = new QLabel(ErrorWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 231, 71));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(ErrorWindow);

        QMetaObject::connectSlotsByName(ErrorWindow);
    } // setupUi

    void retranslateUi(QDialog *ErrorWindow)
    {
        ErrorWindow->setWindowTitle(QCoreApplication::translate("ErrorWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ErrorWindow", "Aceptar", nullptr));
        label->setText(QCoreApplication::translate("ErrorWindow", "Error al introducir los datos.\n"
"Datos no completados o\n"
"n\303\272mero incorrecto.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorWindow: public Ui_ErrorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWINDOW_H
