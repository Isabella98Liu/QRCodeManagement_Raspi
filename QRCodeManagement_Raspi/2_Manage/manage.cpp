#include "manage.h"
#include "ui_manage.h"

Manage::Manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Manage)
{
    ui->setupUi(this);
    Database database;
    ui->tableView->setModel(database.DatabaseTableView());  // show all records in table
}

Manage::~Manage()
{
    delete ui;
}
