#include "scan.h"
#include "ui_scan.h"

Scan::Scan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Scan)
{
    ui->setupUi(this);
}

Scan::~Scan()
{
    delete ui;
}

//---------------------------SLOTS-----------------------------

void Scan::on_pushButton_clicked()  //  if the search button was clicked
{
    QString index = ui->lineEdit->text();
    Database database;
    ui->tableView->setModel(database.DatabaseSelect(index));
}
