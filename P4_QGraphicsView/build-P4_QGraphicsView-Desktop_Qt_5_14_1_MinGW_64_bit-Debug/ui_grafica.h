/********************************************************************************
** Form generated from reading UI file 'grafica.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICA_H
#define UI_GRAFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grafica
{
public:
    QSlider *verticalSlider;
    QPushButton *pushButtonNuevaSerie;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *grafica)
    {
        if (grafica->objectName().isEmpty())
            grafica->setObjectName(QString::fromUtf8("grafica"));
        grafica->resize(400, 300);
        verticalSlider = new QSlider(grafica);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(20, 50, 22, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        pushButtonNuevaSerie = new QPushButton(grafica);
        pushButtonNuevaSerie->setObjectName(QString::fromUtf8("pushButtonNuevaSerie"));
        pushButtonNuevaSerie->setGeometry(QRect(20, 10, 75, 23));
        graphicsView = new QGraphicsView(grafica);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(70, 70, 256, 192));

        retranslateUi(grafica);

        QMetaObject::connectSlotsByName(grafica);
    } // setupUi

    void retranslateUi(QWidget *grafica)
    {
        grafica->setWindowTitle(QCoreApplication::translate("grafica", "Form", nullptr));
        pushButtonNuevaSerie->setText(QCoreApplication::translate("grafica", "nueva serie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grafica: public Ui_grafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICA_H
