/*#########################################################################################*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
/*#########################################################################################*/
uint16_t dataOne = 10;
uint16_t dataTwo = 10;
/*#########################################################################################*/
MainWindow::MainWindow(QWidget *parent) //Builder
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(760,460);
    connect(ui->pushButtonCerrar, SIGNAL(pressed()), this, SLOT(closeWin(void)));
    connect(ui->pushButtonCalcular, SIGNAL(pressed()), this, SLOT(calculoArea(void)));
    connect(ui->verticalSlider, SIGNAL(sliderReleased()), this, SLOT(sliderData(void)));
    connect(ui->horizontalSlider, SIGNAL(sliderReleased()), this, SLOT(sliderData(void)));
}
/*#########################################################################################*/
MainWindow::~MainWindow()               //Destroyer
{
    delete ui;
}
/*#########################################################################################*/
void MainWindow::calculoArea(void)          //Calculate area and show in lineEditArea
{
    uint16_t area, sideOne, sideTwo;

    sideOne = ui->lineEditLadoOne->text().toUInt();
    sideTwo = ui->lineEditLadoTwo->text().toUInt();
    area = sideOne * sideTwo;

    QString strArea = QString::number(area);

    ui->lineEditArea->setText(strArea);
}
/*#########################################################################################*/
void MainWindow::closeWin() //Button for close window
{
    close();
}
/*#########################################################################################*/
void MainWindow::sliderData()   //Show position of sliders vertical in side 1
{
    dataOne = ui->horizontalSlider->sliderPosition();
    QString strDataOne = QString::number(dataOne);
    ui->lineEditLadoOne->setText(strDataOne);

    dataTwo = ui->verticalSlider->sliderPosition();
    QString strDataTwo = QString::number(dataTwo);
    ui->lineEditLadoTwo->setText(strDataTwo);

    ui->labelRect->setGeometry(300, 140, dataOne*2, dataTwo*2);

}
/*#########################################################################################*/
//void MainWindow::paintEvent(QPaintEvent *event)
//{
//    QPainter painter(this);

//    QPen pen;
//    pen.setColor(Qt::green);
//    pen.setWidth(3);
//    painter.setPen(pen);

//    painter.drawRect(QRect(310, 160, dataTwo, dataOne));
//}
/*#########################################################################################*/
void MainWindow::on_pushButton_pressed()    //Clear all lineEdit
{
    ui->lineEditLadoOne->setText("");
    ui->lineEditLadoTwo->setText("");
    ui->lineEditArea->setText("");
}
/*#########################################################################################*/
