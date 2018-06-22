#include "mainwindow.h"
#include "QSS/qss.h"
#include "1_Menu/menu.h"

#include <QDir>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Load QSS style sheet
    QssLoad::setStyle(":/qss/QSS/Style.qss");

    //Creat folder to save captured pictures
    QDir(qApp->applicationDirPath()).mkdir("QRCodes");
    Menu menu;
    menu.show();

    return a.exec();
}
