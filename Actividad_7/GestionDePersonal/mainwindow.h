#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "persona.h"
#include "alumno.h"
#include "profesor.h"

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

    QList<Persona *> listaDePersonal;

    void mostrarLista();

public slots:
    void anyadirAlumno();
    void anyadirProfesor();

    void mostrarDetalles(int fila);

};
#endif // MAINWINDOW_H
