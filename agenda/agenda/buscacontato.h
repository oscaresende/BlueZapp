#ifndef BUSCACONTATO_H
#define BUSCACONTATO_H

#include <QDialog>
#include "database.h"
#include "exibecontato.h"
#include "QMessageBox"

namespace Ui {
class buscacontato;
}

class buscacontato : public QDialog
{
    Q_OBJECT

public:
    explicit buscacontato(QWidget *parent = nullptr);
    ~buscacontato();

public slots:
    void mostra_contato();

private:
    Ui::buscacontato *ui;
    Database *datab;
    exibecontato *exibeInst;
};

#endif // BUSCACONTATO_H
