#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include <QPen>
#include <QBrush>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsItemGroup>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QGraphicsScene       *scene;
    QGraphicsLineItem    *axisX;
    QGraphicsLineItem    *axisY;
    QGraphicsRectItem    *cursor;
    QGraphicsEllipseItem *ellipseItem;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots:
    void configurarObjeto(void);
    void insertarObjeto(void);
    void insertarGrupo(void);
    void configurarVista(void);

};
#endif // MAINWINDOW_H
