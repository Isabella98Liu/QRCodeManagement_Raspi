#ifndef MANAGE_H
#define MANAGE_H

#include <QWidget>
#include <QTableView>
#include "SQLite/database.h"

namespace Ui {
class Manage;
}

class Manage : public QWidget
{
    Q_OBJECT

public:
    explicit Manage(QWidget *parent = 0);
    ~Manage();

private:
    Ui::Manage *ui;

signals:
    void returnPage();
private slots:
    void on_pushButton_clicked();
};

#endif // MANAGE_H
