#include "addinfo.h"
#include "ui_addinfo.h"

AddInfo::AddInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddInfo)
{
//    this->setWindowState(Qt::WindowMaximized);
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
    //  Add Info to Record
    Record *record = new Record;
    record->StdID = ui->StdID->text().toInt();
    record->Name = ui->Name->text();
    record->College = ui->College->text();
    record->Major = ui->Major->text();
    record->time = QDateTime::currentDateTime().toString();
    qDebug() << "A New Record Was Created!";
    //  Store Record into database
    database.DatabaseInsert(record);
    //  Clean the QTextEdit content if the latest record was stored into the database
    ui->StdID->clear();
    ui->Name->clear();
    ui->College->clear();
    ui->Major->clear();
    //  Set the tips content indicates that the new action was completed
    ui->Tips->setText("记录插入成功！");
    //  Set the tips display intervals
    tipsDisplay = new QTimer(this);
    connect(tipsDisplay, SIGNAL(timeout()), this, SLOT(resetTips()));
    tipsDisplay->start(1000);
    tipsDisplay->stop();
}

void AddInfo::on_pushButton_2_clicked() //  if the return button was clicked
{
    emit returnPage();
    delete this;
}

void AddInfo::resetTips()   //  clean the content of the tips window after a period
{
    ui->Tips->clear();
    tipsDisplay->stop();
}
