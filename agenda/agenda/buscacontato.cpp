#include "buscacontato.h"
#include "ui_buscacontato.h"

buscacontato::buscacontato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscacontato)
{
    ui->setupUi(this);    
    datab = new Database();

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(mostra_contato()));
}

buscacontato::~buscacontato()
{
    delete ui;

}

void buscacontato::mostra_contato()
{
    QVector<QString> *contatos;
    contatos = new QVector<QString>;

    QMessageBox mensagem;

    if (datab->connect_database())
    {
        *contatos = datab->select_person(ui->lineEdit->text());
    }
    else
    {
        std::cout << "erro ao conectar" << std::endl;
    }

    if (contatos->length() == 0)
    {
        mensagem.setText("Nenhum contato encontrado.");
        mensagem.exec();
    }
    else
    {
        exibeInst = new exibecontato(NULL,contatos);
        exibeInst->setWindowTitle("Resultado da Pesquisa");
        exibeInst->show();
    }

}


