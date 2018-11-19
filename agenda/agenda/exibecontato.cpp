#include "exibecontato.h"
#include "ui_exibecontato.h"

exibecontato::exibecontato(QWidget *parent, QVector<QString> *contatos) :
    QDialog(parent),
    ui(new Ui::exibecontato)
{
    int i;
    ui->setupUi(this);

    for (i=0; i<contatos->length(); i++)
    {
        ui->plainTextEdit->insertPlainText(contatos->value(i) + "\n");
    }
}

exibecontato::~exibecontato()
{
    delete ui;
}
