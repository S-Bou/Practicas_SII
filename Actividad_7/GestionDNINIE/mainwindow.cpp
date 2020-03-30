#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_AnyadirDoc, SIGNAL(pressed()), this, SLOT(AnyadirDoc()));
    connect(ui->comboBox_TipoDoc, SIGNAL(currentTextChanged(QString)), this, SLOT(comboBoxDni()));
    connect(ui->listWidget_Documentos, SIGNAL(currentRowChanged(int)), this, SLOT(mostrarDetalles(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AnyadirDoc()
{
    if(ui->comboBox_TipoDoc->currentText() == QString("DNI"))
    {
        Dni *dni = new Dni;

        dni->setTipodoc(ui->comboBox_TipoDoc->currentText());
        dni->setSexo(ui->comboBox_Sexo->currentText());
        dni->setNombre(ui->lineEdit_Nombre->text());
        dni->setApellidos(ui->lineEdit_Apellidos->text());
        dni->setNumID(ui->lineEdit_NumDoc->text());
        dni->setNacionalidad(ui->lineEdit_Nacionalidad->text());

        VALIDO datosDni = dni->ValidarDatos();

        if(datosDni)
        {
            listaDeDocumentos.prepend(dni);
            mostrarLista();

        }else{Documento::MostrarError();}
    }
    else if(ui->comboBox_TipoDoc->currentText() == QString("NIE"))
    {
        Nie *nie = new Nie;

        nie->setTipodoc(ui->comboBox_TipoDoc->currentText());
        nie->setSexo(ui->comboBox_Sexo->currentText());
        nie->setNombre(ui->lineEdit_Nombre->text());
        nie->setApellidos(ui->lineEdit_Apellidos->text());
        nie->setNumID(ui->lineEdit_NumDoc->text());
        nie->setNacionalidad(ui->lineEdit_Nacionalidad->text());

        VALIDO datosNie = nie->ValidarDatos();

        if(datosNie)
        {
            listaDeDocumentos.prepend(nie);
            mostrarLista();

        }else{Documento::MostrarError();}
    }
    else if(ui->comboBox_TipoDoc->currentText() == QString("DNI / NIE"))
    {
        VALIDO datosID = Documento::ValidarDatos();
        if(!datosID)
        {
            Documento::MostrarError();
        }
    }
}

void MainWindow::comboBoxDni(void)
{
    QString str = ui->comboBox_TipoDoc->currentText();
    if(str == "DNI")
    {
        ui->lineEdit_Nacionalidad->setText("Española");
    }
    else
    {
        ui->lineEdit_Nacionalidad->setText("");
    }
}

void MainWindow::mostrarLista()
{
    ui->listWidget_Documentos->clear();

    for(int i = 0; i < listaDeDocumentos.count(); i++)
    {
        ui->listWidget_Documentos->addItem(listaDeDocumentos[i]->Resumen());
    }
}

void MainWindow::mostrarDetalles(int fila)
{
    if(fila < 0 || fila > listaDeDocumentos.count())
    {
        ui->plainTextEdit_Datos->clear();
    }
    else
    {
        ui->plainTextEdit_Datos->setPlainText(listaDeDocumentos[fila]->Descripcion());
    }
}
