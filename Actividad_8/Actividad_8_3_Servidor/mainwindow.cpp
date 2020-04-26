#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_start_clicked()
{
    //Desactivamos todos los controles de la ventana que estén activados.
    ui->pushButton_start->setEnabled(false);
    ui->spinBox_puerto->setEnabled(false);

    //Creamos un objeto de la clase RandoServer en el puerto indicado por el spinBox
    servidor = new RandomServer(ui->spinBox_puerto->value());

    if(servidor->estaEscuchando())
    {
        //Si ha sido posible poner en marcha el servidor
        qDebug() << "Servidor escuchando en el puerto: " << servidor->puerto();

        ui->pushButton_stop->setEnabled(true);
    }
    else
    {
        //Si no ha sido posible poner en marcha el servidor
        ui->pushButton_start->setEnabled(true);
        ui->spinBox_puerto->setEnabled(true);
        delete servidor;

        qDebug() << "No se puede poner en marcha el servidor. Seguramente el puerto esté ocupado.";
    }
}

void MainWindow::on_pushButton_stop_clicked()
{
    ui->pushButton_stop->setEnabled(false);

    if(servidor)
    {
        servidor->cerrar();
        delete servidor;
    }

    ui->pushButton_start->setEnabled(true);
    ui->spinBox_puerto->setEnabled(true);
    qDebug() << "Servidor cerrado.";
}
