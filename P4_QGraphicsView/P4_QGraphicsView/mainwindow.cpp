#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qglobal.h>
#include <QTime>
/*##########################################################################################################################*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QPen pen;
    pen.setColor(QColor(0, 0, 0));
    pen.setWidth(1);
    pen.setStyle(Qt::PenStyle::SolidLine);

    axisX = new QGraphicsLineItem;
    axisY = new QGraphicsLineItem;

    axisX->setPen(pen);
    axisY->setPen(pen);
    axisX->setPos(0.0, 0.0);
    axisY->setPos(0.0, 0.0);
    axisX->setLine(-20.0, 0.0, 20.0, 0.0);
    axisY->setLine(0.0, -20.0, 0.0, 20.0);

    scene->addItem(axisX);
    scene->addItem(axisY);

    QBrush brush;
    brush.setColor(QColor(0, 0, 0));
    brush.setStyle(Qt::BrushStyle::NoBrush);

    cursor = new QGraphicsRectItem;
    cursor->setPen(pen);
    cursor->setBrush(brush);
    cursor->setPos(0.0, 0.0);
    cursor->setRect(-5.0, -5.0, 10.0, 10.0);

    scene->addItem(cursor);

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    scene->setSceneRect(-200,-200,400,400);
    ui->graphicsView->setDragMode(QGraphicsView::ScrollHandDrag);

    configurarVista();

    connect(ui->pushButtonInsertar,      SIGNAL(clicked(bool)),     this, SLOT(insertarObjeto()));
    connect(ui->pushButtonInsertarGrupo, SIGNAL(clicked(bool)),     this, SLOT(insertarGrupo()));
    connect(ui->horizontalSliderX,       SIGNAL(valueChanged(int)), this, SLOT(configurarObjeto()));
    connect(ui->horizontalSliderY,       SIGNAL(valueChanged(int)), this, SLOT(configurarObjeto()));
    connect(ui->horizontalSliderWidth,   SIGNAL(valueChanged(int)), this, SLOT(configurarObjeto()));
    connect(ui->horizontalSliderHeight,  SIGNAL(valueChanged(int)), this, SLOT(configurarObjeto()));
    connect(ui->horizontalSliderRotate,  SIGNAL(valueChanged(int)), this, SLOT(configurarVista()));
    connect(ui->horizontalSliderScale,  SIGNAL(valueChanged(int)), this, SLOT(configurarVista()));
}
/*##########################################################################################################################*/
MainWindow::~MainWindow()
{
    delete ui;
}
/*##########################################################################################################################*/
void MainWindow::configurarObjeto()
{
    ui->labelEjeX   ->setText(QString("X = ")      +QString::number(ui->horizontalSliderX      ->value()));
    ui->labelEjeY   ->setText(QString("Y = ")      +QString::number(ui->horizontalSliderY      ->value()));
    ui->labelWidth  ->setText(QString("Width = ")  +QString::number(ui->horizontalSliderWidth  ->value()));
    ui->labelHeight ->setText(QString("Height = ") +QString::number(ui->horizontalSliderHeight ->value()));

    cursor->setPos(ui->horizontalSliderX->value(), ui->horizontalSliderY->value());

    cursor->setRect(-ui->horizontalSliderWidth  ->value()/2.0,
                    -ui->horizontalSliderHeight ->value()/2.0,
                     ui->horizontalSliderWidth  ->value(),
                     ui->horizontalSliderHeight ->value());
}
/*##########################################################################################################################*/
int randInt(int low, int high)
{
    return qrand() % ((high+1) - low) + low;
}
/*##########################################################################################################################*/
void MainWindow::insertarObjeto()
{
    QPen pen;
    pen.setColor(QColor(0, 0, 0));
    pen.setWidth(1);
    pen.setStyle(Qt::PenStyle::SolidLine);

    QBrush brush;
    brush.setColor(QColor(randInt(0, 255), randInt(0, 255), randInt(0, 255)));
    brush.setStyle(Qt::BrushStyle::SolidPattern);

    ellipseItem = new QGraphicsEllipseItem;
    ellipseItem->setPen(pen);
    ellipseItem->setBrush(brush);
    ellipseItem->setRect(cursor->rect());
    ellipseItem->setPos(cursor->pos());

    scene->addItem(ellipseItem);
}

void MainWindow::insertarGrupo()
{
    QPen pen;
    pen.setColor(QColor(0, 0, 0));
    pen.setWidth(1);
    pen.setStyle(Qt::PenStyle::SolidLine);

    QBrush brush;
    brush.setColor(QColor(randInt(0, 255), randInt(0, 255), randInt(0, 255)));
    brush.setStyle(Qt::BrushStyle::SolidPattern);

    QGraphicsEllipseItem *ellipseItemG = new QGraphicsEllipseItem;
    ellipseItemG->setPen(pen);
    ellipseItemG->setBrush(brush);
    ellipseItemG->setRect(cursor->rect());
    ellipseItemG->setPos(cursor->pos() - QPoint(10.0, 10.0));

    QGraphicsRectItem *rectItemG = new QGraphicsRectItem;
    rectItemG->setPen(pen);
    rectItemG->setBrush(brush);
    rectItemG->setRect(cursor->rect());
    rectItemG->setPos(cursor->pos() + QPoint(10.0, 10.0));

    QGraphicsItemGroup *ItemG = new QGraphicsItemGroup;
    ItemG->addToGroup(ellipseItemG);
    ItemG->addToGroup(rectItemG);

    scene->addItem(ItemG);
}

void MainWindow::configurarVista(){
    float scale = 1.0 + ui->horizontalSliderScale ->value()/100.0;
    float rotate =      ui->horizontalSliderRotate->value();

    ui->labelRotate->setText(QString("Rotate=") + QString::number(rotate));
    ui->labelScale ->setText(QString("Scale=") + QString::number(scale));

    QTransform transform;
    transform.rotate(rotate);
    transform.scale (scale, scale);

    ui->graphicsView->setTransform(transform, false);

}
/*##########################################################################################################################*/

