#include "menuayudaacercade.h"
#include "ui_menuayudaacercade.h"

MenuAyudaAcercaDe::MenuAyudaAcercaDe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuAyudaAcercaDe)
{
    ui->setupUi(this);
}

MenuAyudaAcercaDe::~MenuAyudaAcercaDe()
{
    delete ui;
}
