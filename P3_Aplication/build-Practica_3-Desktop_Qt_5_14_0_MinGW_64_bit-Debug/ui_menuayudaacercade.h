/********************************************************************************
** Form generated from reading UI file 'menuayudaacercade.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUAYUDAACERCADE_H
#define UI_MENUAYUDAACERCADE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuAyudaAcercaDe
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuAyudaAcercaDe)
    {
        if (MenuAyudaAcercaDe->objectName().isEmpty())
            MenuAyudaAcercaDe->setObjectName(QString::fromUtf8("MenuAyudaAcercaDe"));
        MenuAyudaAcercaDe->resize(500, 350);
        centralwidget = new QWidget(MenuAyudaAcercaDe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 481, 291));
        MenuAyudaAcercaDe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuAyudaAcercaDe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 21));
        MenuAyudaAcercaDe->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuAyudaAcercaDe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuAyudaAcercaDe->setStatusBar(statusbar);

        retranslateUi(MenuAyudaAcercaDe);

        QMetaObject::connectSlotsByName(MenuAyudaAcercaDe);
    } // setupUi

    void retranslateUi(QMainWindow *MenuAyudaAcercaDe)
    {
        MenuAyudaAcercaDe->setWindowTitle(QCoreApplication::translate("MenuAyudaAcercaDe", "Ayuda - Acerca de...", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MenuAyudaAcercaDe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Universidad politecnica de Valencia</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Escuela t\303\251cnica superior de ingenieria del dise\303\261o</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Sistemas inform\303\241ticos induustriales</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">Interface de usuario - widget</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuAyudaAcercaDe: public Ui_MenuAyudaAcercaDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUAYUDAACERCADE_H
