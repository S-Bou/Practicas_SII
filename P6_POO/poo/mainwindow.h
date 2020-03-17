#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cpoligono.h"
#include "ctriangulo.h"
#include "ccuadrado.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CPoligono *poligono;
    CPoligono *triangulo;
    CPoligono *cuadrado;

public slots:
    void crearPoligono();
    void introducirLado();
    void mostrarPropiedades();
    void CrearTriangulo();
    void CrearCuadrado();

};
#endif // MAINWINDOW_H
