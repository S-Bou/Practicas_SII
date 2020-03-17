#ifndef MENUAYUDAACERCADE_H
#define MENUAYUDAACERCADE_H

#include <QMainWindow>

namespace Ui {
class MenuAyudaAcercaDe;
}

class MenuAyudaAcercaDe : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuAyudaAcercaDe(QWidget *parent = nullptr);
    ~MenuAyudaAcercaDe();

private:
    Ui::MenuAyudaAcercaDe *ui;

};

#endif // MENUAYUDAACERCADE_H
