#ifndef ADDINFO_H
#define ADDINFO_H

#include "SQLite/database.h"
#include <QWidget>
#include <QDateTime>
#include <QDebug>
#include <QString>

namespace Ui {
class AddInfo;
}

class AddInfo : public QWidget
{
    Q_OBJECT

public:
    explicit AddInfo(QWidget *parent = 0);
    ~AddInfo();
    Database database;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void returnPage();
private:
    Ui::AddInfo *ui;
};

#endif // ADDINFO_H
