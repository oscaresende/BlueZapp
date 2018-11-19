#ifndef REMOVECONTATO_H
#define REMOVECONTATO_H

#include <QDialog>
#include <database.h>
#include "QSqlQueryModel"
#include <QSortFilterProxyModel>

namespace Ui {
class removecontato;
}

class removecontato : public QDialog
{
    Q_OBJECT

public:
    explicit removecontato(QWidget *parent = nullptr);
    ~removecontato();

public slots:
    void remove_contato();

private:
    Ui::removecontato *ui;
    Database *databaseInst;
    QSqlQueryModel *model;
    QSortFilterProxyModel *proxyModel;
};

#endif // REMOVECONTATO_H
