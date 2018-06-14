#include "addinfo.h"
#include "ui_addinfo.h"

AddInfo::AddInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddInfo)
{
    ui->setupUi(this);
    database.DatabaseCreate();
}

AddInfo::~AddInfo()
{
    delete ui;
}

//---------------------------SLOTS-----------------------------

void AddInfo::on_pushButton_clicked()   //  if the AddInfo Button was clicked
{
    // Add Info to Record
    Record *record = new Record;
    record->StdID = ui->StdID->text().toInt();
    record->Name = ui->Name->text();
    record->College = ui->College->text();
    record->Major = ui->Major->text();
    record->time = QDateTime::currentDateTime().toString();
    qDebug() << "A New Record Was Created!";
    // Store Record into database
    database.DatabaseInsert(record);
}
