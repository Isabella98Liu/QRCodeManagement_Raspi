#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

//--------------------------SLOTS------------------------
void Menu::on_pushButton_clicked()
{
    Manage *manage = new Manage;
    this->setVisible(false);
    manage->show();
}

void Menu::on_pushButton_2_clicked()    //  Switch to AddInfo Page
{
    AddInfo *addInfo = new AddInfo;
    this->setVisible(false);
    addInfo->show();
}
