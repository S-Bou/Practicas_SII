#include "mainwindow.h"
#include "grafica.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    grafica g;
    w.show();
    g.show();

    return a.exec();
}
