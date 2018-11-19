#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "adicionacontato.h"
#include "removecontato.h"
#include "buscacontato.h"
#include "database.h"
#include "QSqlQueryModel"
#include <QSortFilterProxyModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void buscar();
    void adicionar();
    void remover();
    void listarContatos();

private:
    Ui::MainWindow *ui;
    AdicionaContato *addInst;
    removecontato *remInst;
    buscacontato *buscaInst;
    Database *dataInst;
    QSqlQueryModel *model;
    QSortFilterProxyModel *proxyModel;
};

#endif // MAINWINDOW_H
