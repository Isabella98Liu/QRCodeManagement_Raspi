#include "manage.h"
#include "ui_manage.h"

Manage::Manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Manage)
{
    //  move current window to the center of the screen
    QDesktopWidget* desktop = QApplication::desktop();
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    ui->setupUi(this);
    Database database;
    ui->tableView->setModel(database.DatabaseTableView());  // show all records in table
}

Manage::~Manage()
{
    delete ui;
}


void Manage::on_pushButton_clicked()    //  if the return button was clicked
{
    emit returnPage();
    delete this;
}
