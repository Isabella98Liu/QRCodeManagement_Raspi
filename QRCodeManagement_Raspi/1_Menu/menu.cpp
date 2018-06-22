#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    //  move current window to the center of the screen
    QDesktopWidget* desktop = QApplication::desktop();
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
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


