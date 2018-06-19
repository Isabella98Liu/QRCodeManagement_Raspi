#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    this->setWindowState(Qt::WindowMaximized);
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
    connect(manage, SIGNAL(returnPage()), this, SLOT(showPage()));
    this->setVisible(false);
    manage->show();
}

void Menu::on_pushButton_2_clicked()    //  Switch to AddInfo Page
{
    AddInfo *addInfo = new AddInfo;
    connect(addInfo, SIGNAL(returnPage()), this, SLOT(showPage()));
    this->setVisible(false);
    addInfo->show();
}

void Menu::on_pushButton_3_clicked()    //  if the scan button was clicked
{
    Scan *scanInfo = new Scan;
    scanInfo->setVisible(false);
    scanInfo->show();
}

void Menu::showPage()   //  if slot[returnPage()] was triggered, show current menu page
{
    this->setVisible(true);
}


