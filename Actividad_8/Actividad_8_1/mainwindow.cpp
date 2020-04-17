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

        //Añadimos la línea de texto a listWidget
        ui->listWidget->addItem(linea);
    }
}

void MainWindow::on_pushButton_clicked()
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

    if(socket->isOpen())
    {
        timer = new QTimer();
        connect(timer, SIGNAL(timeout()), this, SLOT(pedirNumero()));
        timer->start(2000);
    }
}

void MainWindow::pedirNumero()
{
    //Preparamosla petición web, usando el protocolo HTTP 1.0
    QString str = "RDN\r\n";

    //Esperamos a que se establezca la conexión.
    socket->waitForConnected();

    //Enviamos el string en formato utf8 (compatible con el servidor web)
    socket->write(str.toUtf8());

    //Para asegurarnos que la petición se envía inmediatamente invocamos el método flush.
    socket->flush();
}

