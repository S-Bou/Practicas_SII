#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ayudaAcercaDe = new MenuAyudaAcercaDe(this);

    connect(ui->actionAcerca_de, SIGNAL(triggered()), this, SLOT(ManejadorMenuAyudaAcercaDe()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ayudaAcercaDe;
}

void MainWindow::ManejadorMenuAyudaAcercaDe()
{
    ayudaAcercaDe->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->plainTextEdit->clear();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->plainTextEdit->insertPlainText(QTime::currentTime().toString());
    ui->plainTextEdit->insertPlainText("\n");
}
