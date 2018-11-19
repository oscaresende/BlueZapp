#include "removecontato.h"
#include "ui_removecontato.h"


removecontato::removecontato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removecontato)
{
    ui->setupUi(this);
    databaseInst = new Database();

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(remove_contato()));

    model = new QSqlQueryModel(this);
    model->setQuery(databaseInst->listarContato(),databaseInst->dbConnection);
    ui->comboBox->setModel(model);
    ui->comboBox->setModelColumn(0);
    ui->comboBox->show();

    
    
}

removecontato::~removecontato()
{
    delete ui;
}


void removecontato::remove_contato()
{
    if (databaseInst->connect_database())
    {
        databaseInst->remove_person(ui->comboBox->currentText());
    }

    else
    {
        std::cout << "Erro" << std::endl;
    }
}
