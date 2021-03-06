#ifndef MENU_H
#define MENU_H

#include "2_Manage/manage.h"
#include "3_Scan/scan.h"
#include "4_AddInfo/addinfo.h"

#include <QWidget>
#include <QDesktopWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void showPage();

    void on_pushButton_3_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
