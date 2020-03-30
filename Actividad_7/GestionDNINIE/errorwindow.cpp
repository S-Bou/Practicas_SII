#include "errorwindow.h"
#include "ui_errorwindow.h"

ErrorWindow::ErrorWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(pressed()), this, SLOT(CerrarVentana()));
}

ErrorWindow::~ErrorWindow()
{
    delete ui;
}

void ErrorWindow::CerrarVentana()
{
    hide();
}

