#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(465, 300);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::datosDisponibles()
{
    //"sender()" nos permite manejar varias conexiones TCP en paralelo con un único slot.
    //Aunque en este ejemplo no usemos varias conexiones, viene bien habituarse a su uso.
    QTcpSocket *socket = static_cast<QTcpSocket *>(sender());

    //Bucle para leer todas las líneas recibidas en un único segmentoTCP
    while(socket->canReadLine())
    {
        //Leemos una línea (readLine) y eliminamos los espacios en blanco
        //al principio y al final (trimmed)
        QByteArray buffer = socket->readLine().trimmed();

        //Convertimos el Array de Bytes en QString, suponiendo que el formato
        //de caracteres es utf8
        QString linea = QString::fromUtf8(buffer);

        if(linea == "RandomServer/3.0")
        {
            ui->pushButton_Hora_Fecha->setEnabled(true);
            ui->pushButton_Hora->setEnabled(true);
            ui->pushButton_Fecha->setEnabled(true);
            ui->pushButton_Dia->setEnabled(true);
            ui->pushButton_Alarma->setEnabled(true);
        }

        //Añadimos la línea de texto a listWidget
        ui->listWidget->addItem(linea);
    }
}

void MainWindow::on_pushButton_Conectar_clicked()
{
    ui->listWidget->clear();

    socket = new QTcpSocket();

    if(!socket){return;}    //Si no se puede crear un socket termina el método.

    //Conectamos el socket para que active el SLOT "datosDisponibles" cada vez que reciba datos.
    connect(socket, SIGNAL(readyRead()), this, SLOT(datosDisponibles()));

    //Conectamos el objeto socket para que sea destruido cuando se cierre la conexión.
    connect(socket, SIGNAL(disconnected()), socket, SLOT(deleteLater()));

    //Establecemos la conexión
    socket->connectToHost("localhost", 1024);
}

void MainWindow::on_pushButton_Hora_Fecha_clicked()
{
    ui->listWidget->clear();

    if(socket->isOpen())
    {
        //Preparamosla petición web, usando el protocolo HTTP 1.0
        QString str = "FechaYHora\r\n";

        //Esperamos a que se establezca la conexión.
        socket->waitForConnected();

        //Enviamos el string en formato utf8 (compatible con el servidor web)
        socket->write(str.toUtf8());

        //Para asegurarnos que la petición se envía inmediatamente invocamos el método flush.
        socket->flush();
    }
}

void MainWindow::on_pushButton_Hora_clicked()
{
    ui->listWidget->clear();

    if(socket->isOpen())
    {
        //Preparamosla petición web, usando el protocolo HTTP 1.0
        QString str = "hora\r\n";

        //Esperamos a que se establezca la conexión.
        socket->waitForConnected();

        //Enviamos el string en formato utf8 (compatible con el servidor web)
        socket->write(str.toUtf8());

        //Para asegurarnos que la petición se envía inmediatamente invocamos el método flush.
        socket->flush();
    }
}

void MainWindow::on_pushButton_Fecha_clicked()
{
    ui->listWidget->clear();

    if(socket->isOpen())
    {
        //Preparamosla petición web, usando el protocolo HTTP 1.0
        QString str = "fecha\r\n";

        //Esperamos a que se establezca la conexión.
        socket->waitForConnected();

        //Enviamos el string en formato utf8 (compatible con el servidor web)
        socket->write(str.toUtf8());

        //Para asegurarnos que la petición se envía inmediatamente invocamos el método flush.
        socket->flush();
    }
}

void MainWindow::on_pushButton_Dia_clicked()
{
    ui->listWidget->clear();

    if(socket->isOpen())
    {
        //Preparamosla petición web, usando el protocolo HTTP 1.0
        QString str = "diaSemana\r\n";

        //Esperamos a que se establezca la conexión.
        socket->waitForConnected();

        //Enviamos el string en formato utf8 (compatible con el servidor web)
        socket->write(str.toUtf8());

        //Para asegurarnos que la petición se envía inmediatamente invocamos el método flush.
        socket->flush();
    }
}

void MainWindow::on_pushButton_EstablecerAlarma_clicked()
{
    ui->listWidget->clear();

    if(socket->isOpen())
    {
        QString str;
        int horasDec = ui->spinBox_HorasDecenas->value();
        int horasUni = ui->spinBox_HorasUnidades->value();
        int minutosDec = ui->spinBox_MinutosDecenas->value();
        int minutosUni = ui->spinBox_MinutosUnidades->value();

        if(horasDec == 2 && horasUni>3)
        {
            //Preparamosla petición web, usando el protocolo HTTP 1.0
            str = "erroralarma\r\n";
        }
        else
        {
            //Preparamosla petición web, usando el protocolo HTTP 1.0
            str = "alarma " + QString::number(horasDec) + QString::number(horasUni) + ":" + QString::number(minutosDec) + QString::number(minutosUni) + "\r\n";
        }

        //Esperamos a que se establezca la conexión.
        socket->waitForConnected();

        //Enviamos el string en formato utf8 (compatible con el servidor web)
        socket->write(str.toUtf8());

        //Para asegurarnos que la petición se envía inmediatamente invocamos el método flush.
        socket->flush();
    }
}

void MainWindow::on_pushButton_DesdactivarAlarma_clicked()
{
    ui->listWidget->resize(440, 200);
    ui->groupBox->setEnabled(false);
    ui->groupBox->setVisible(false);
    ui->listWidget->clear();

    if(socket->isOpen())
    {
        //Preparamosla petición web, usando el protocolo HTTP 1.0
        QString str = "desactivarAlarma\r\n";

        //Esperamos a que se establezca la conexión.
        socket->waitForConnected();

        //Enviamos el string en formato utf8 (compatible con el servidor web)
        socket->write(str.toUtf8());

        //Para asegurarnos que la petición se envía inmediatamente invocamos el método flush.
        socket->flush();
    }
}

void MainWindow::on_pushButton_Alarma_clicked()
{
     ui->listWidget->resize(440, 80);
     ui->groupBox->setVisible(true);
     ui->groupBox->setEnabled(true);
}

