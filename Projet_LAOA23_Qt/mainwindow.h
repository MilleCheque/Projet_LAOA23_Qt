#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//on a une base de donnée qui représente :
//info perso client, info réservation client et  info status client (mettre dans un structure de user ? )
//info , info réservation de chambre et  info status chambre (mettre dans un structure de user ? )

//idée de fonctionnement de l'ui ? :
//4 représentation de tableaux déroulants : Toute les clients, Toutes les chambres, les chambres d'un client, les clients d'une chambre (on peut utiliser une icone d'info plus tot qu'un tableau  )

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
