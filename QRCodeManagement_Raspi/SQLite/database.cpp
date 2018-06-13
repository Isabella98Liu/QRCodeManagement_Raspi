#include "database.h"

Database::Database()
{
    database = QSqlDatabase::addDatabase("QSQLITE");    //  link to a database
    folderPath = qApp->applicationDirPath();    //  get the directory path of the applicaiton
    database.setDatabaseName(QString(folderPath + "/Record.db"));   //  rename the database, if the database does not exists, then create, else if it exists, then use it
}

void Database::DatabaseOperate()    //  operations to the daatabse
{

}

void Database::DatabaseCreate(QSqlQuery sql_query)  //  create the table
{
    if(database.open())
    {
        QString create_sql = "CREATE TABLE RECORD (StdID INT PRIMARY KEY, Name STRING, College STRING, Major STRING, Time STRING)";
        sql_query.prepare(create_sql);
        if(!sql_query.exec())
        {
            qDebug() << "Table Create Failed!";
            qDebug() << sql_query.lastError();
        }
        else
        {
            qDebug() << "Table Created Successfully!";
        }
    }
    database.close();
}
