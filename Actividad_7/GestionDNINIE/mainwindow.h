#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "errorwindow.h"
#include <QList>
#include "documento.h"
#include "dni.h"
#include "nie.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, public Documento
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QList<Documento *> listaDeDocumentos;
    void mostrarLista(void);

public slots:
    void AnyadirDoc(void);
    void comboBoxDni(void);
    void mostrarDetalles(int fila);


};
#endif // MAINWINDOW_H
