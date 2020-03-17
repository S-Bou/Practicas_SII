#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menuayudaacercade.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    MenuAyudaAcercaDe *ayudaAcercaDe;

public slots:
    void ManejadorMenuAyudaAcercaDe(void);
private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
};
#endif // MAINWINDOW_H
