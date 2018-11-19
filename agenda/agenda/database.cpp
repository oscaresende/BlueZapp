#include "database.h"

Database::Database(QObject *parent) : QObject(parent)
{
}

bool Database::connect_database()
{
    dbConnection = QSqlDatabase::addDatabase("QSQLITE");
    dbConnection.setDatabaseName("AgendaDB.db");

    if (!dbConnection.open()) {
        std::cout << "Error" << std::endl;
        //qDebug() << dbConnection.lastError();
        return false;
    }

    else
    {
        std::cout << "Ok" << std::endl;
        return true;
    }
}

bool Database::insert_person(QString nome, QString telefone, QString endereco)
{
    QSqlQuery query (dbConnection);
    query.prepare ("INSERT INTO Pessoa (nome, telefone, endereco) VALUES (:nome, :telefone, :endereco)");

    query.bindValue(":nome", nome);
    query.bindValue(":telefone", telefone);
    query.bindValue(":endereco", endereco);

    if (query.exec())
    {
        return true;
    }

    else
    {
        qDebug() << "A inserção falou! " ;
        return false;
    }
}

bool Database::remove_person(QString nome)
{
    QSqlQuery query (dbConnection);
    query.prepare ("DELETE FROM PESSOA WHERE NOME = :NOME");

    query.bindValue(":NOME", nome);

    if (query.exec())
    {
        return true;
    }

    else
    {
        qDebug() << "A remoção falhou!";
        return false;
    }
}


QVector<QString> Database::select_person(QString nome)
{
    QVector<QString> strResult;
    QSqlQuery query (dbConnection);
    query.prepare ("SELECT NOME || '; ' || TELEFONE || '; ' || ENDERECO FROM PESSOA WHERE NOME LIKE '" + nome + "%'");

    if (query.exec())
    {
        //query.first();
        while (query.next()) {
            std::cout << query.value(0).toString().toStdString() << std::endl;
            strResult.push_back(query.value(0).toString());
        }

        return strResult;
    }

    else
    {
        return strResult;
    }

}

QString Database::listarContato()
{
   QString retorno = "SELECT NOME, TELEFONE, ENDERECO FROM PESSOA";
   return retorno;
}























