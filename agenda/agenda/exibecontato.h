#ifndef EXIBECONTATO_H
#define EXIBECONTATO_H

#include <QDialog>
#include "database.h"



namespace Ui {
class exibecontato;
}

class exibecontato : public QDialog
{
    Q_OBJECT

public:
    explicit exibecontato(QWidget *parent, QVector<QString> *contatos);
    ~exibecontato();

private:
    Ui::exibecontato *ui;
};

#endif // EXIBECONTATO_H
