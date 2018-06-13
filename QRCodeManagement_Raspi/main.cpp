#include "mainwindow.h"
#include "Qss/qss.h"
#include "1_Menu/menu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Load QSS style sheet
    QssLoad::setStyle(":/qss/QSS/Style.qss");

    Menu menu;
    menu.show();

    return a.exec();
}
