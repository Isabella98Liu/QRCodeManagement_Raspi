#ifndef DATABASE_H
#define DATABASE_H

#include <QDebug>
#include <QString>
#include <QDateTime>
#include <QApplication>
//--------SQLite Database head file------
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QVariantList>
//----------------------------------------

class Record
{
public:
    int StdID;
    QString Name;
    QString College;
    QString Major;
    QDateTime time;
};


class Database
{
public:
    Database();
    QSqlDatabase database;
    QString folderPath;
    void DatabaseOperate();
    void DatabaseCreate(QSqlQuery);
    void DatabaseInsert(QSqlQuery);
    void DatabaseSelect(QSqlQuery);
};

#endif // DATABASE_H
