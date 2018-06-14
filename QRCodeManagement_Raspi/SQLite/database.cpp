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

void Database::DatabaseCreate()  //  create the table
{
    if(database.open())
    {
        QSqlQuery sql_query;
        // Check if the RECORD Table exists in the database
        bool isTableExist = false;
        QString check_sql = "SELECT COUNT(*) FROM SQLITE_MASTER WHERE TYPE='TABLE' AND NAME='%1'";
        sql_query.prepare(check_sql.arg("RECORD"));
        if(!sql_query.exec())
        {
            qDebug() << "Check Action Failed!";
        }
        else
        {
            isTableExist = sql_query.exec();
            qDebug() << "Check Action Done!";
        }
        //  Create the RECORD Table if it does not exist
        if(!isTableExist)
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
        else
        {
            qDebug() << "RECORD Table already exists";
        }
    }
    database.close();
}

void Database::DatabaseInsert(Record* record)
{
    if(database.open())
    {
        QSqlQuery sql_query;
        QString insert_sql = "INSERT INTO RECORD VALUES (?,?,?,?,?)";   //  insert values into table
        sql_query.prepare(insert_sql);

        //  create QVariantList values for the input record
        QVariantList StdID;
        QVariantList Name;
        QVariantList College;
        QVariantList Major;
        QVariantList Time;

        StdID.append(record->StdID);
        Name.append(record->Name);
        College.append(record->College);
        Major.append(record->Major);
        Time.append(record->time);

        sql_query.addBindValue(StdID);
        sql_query.addBindValue(Name);
        sql_query.addBindValue(College);
        sql_query.addBindValue(Major);
        sql_query.addBindValue(Time);

        if(!sql_query.execBatch())
        {
            qDebug() << "Insert Values Into Table Failed!";
            qDebug() << sql_query.lastError();
        }
        else
        {
            qDebug() << "Insert Successfully!";
        }
    }
    database.close();

}

void Database::DatabaseSelect()
{

}
