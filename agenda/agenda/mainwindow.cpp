#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dataInst = new Database();
    dataInst->connect_database();

    connect(ui->actionAdicionar, SIGNAL(triggered()), this, SLOT(adicionar()));
    connect(ui->actionRemover, SIGNAL(triggered()), this, SLOT(remover()));
    connect(ui->buscar_pushButton, SIGNAL(clicked()), this, SLOT(buscar()));

    listarContatos();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::adicionar()
{
    addInst = new AdicionaContato();
    addInst->setWindowTitle("Adicionar Contato");
    addInst->show();    
}

void MainWindow::remover()
{
    remInst = new removecontato();
    remInst->setWindowTitle("Remove Contato");
    remInst->show();
}

void MainWindow::buscar()
{
    buscaInst = new buscacontato();
    buscaInst->setWindowTitle("Pesquisar Contato");
    buscaInst->show();
}

void MainWindow::listarContatos()
{
    model = new QSqlQueryModel();
    model->setQuery(dataInst->listarContato(),dataInst->dbConnection);
    ui->tableView->setModel(model);
    ui->tableView->show();
}
