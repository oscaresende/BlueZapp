#ifndef DATABASE_H
#define DATABASE_H

#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
//#include "sqlite3.h"
#include <iostream>

class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = nullptr);
    QSqlDatabase dbConnection;
    QString listarContato();

public slots:
    bool connect_database ();
    bool insert_person (QString nome, QString telefone, QString endereco);
    bool remove_person (QString nome);
    QVector<QString> select_person (QString nome);

};

#endif // DATABASE_H
