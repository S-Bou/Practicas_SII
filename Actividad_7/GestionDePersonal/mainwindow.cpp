#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_AnyadirAlumno, SIGNAL(pressed()), this, SLOT(anyadirAlumno()));
    connect(ui->listWidget_personal, SIGNAL(currentRowChanged(int)), this, SLOT(mostrarDetalles(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mostrarLista()
{
    ui->listWidget_personal->clear();

    for(int i = 0; i < listaDePersonal.count(); i++)
    {
        ui->listWidget_personal->addItem(listaDePersonal[i]->Resumen());
    }
}

void MainWindow::anyadirAlumno()
{
    Alumno *alumno = new Alumno;

    alumno->setNumeroDeIdentificacion(ui->lineEdit_NI->text());
    alumno->setNombre(ui->lineEdit_Nombre->text());
    alumno->setApellidos(ui->lineEdit_Apellidos->text());
    alumno->setCurso(ui->lineEdit_Curso->text());

    QString asignaturas = ui->plainTextEdit_Asignaturas->toPlainText();

    /*
     * La siguiente línea del código (método split) divide el texto guardado
     * en "asignaturas" en líneas de texto.
     * Cada línea de texto encontrada l aguarda en un QString, y guarda todas las
     * líneas encontradas en una lista de tipo QStringList.
     */
    QStringList lineas = asignaturas.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);

    /*
     * Cada línea encontrada es una asignatura, por lo que las recorro con un bucle
     * y las añado a alumno.
     */
    for(int i = 0; i < lineas.count(); i++)
    {
        alumno->appendAsignatura(lineas[i]);
    }

    listaDePersonal.append(alumno);

    mostrarLista();

    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::mostrarDetalles(int i)
{
    if(i < 0 || i > listaDePersonal.count())
    {
        ui->plainTextEdit_detalles->clear();
    }
    else
    {
        ui->plainTextEdit_detalles->setPlainText(listaDePersonal[i]->Descripcion());
    }
}









