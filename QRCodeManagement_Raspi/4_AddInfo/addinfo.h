#ifndef ADDINFO_H
#define ADDINFO_H

#include "SQLite/database.h"

#include <QWidget>
#include <QDateTime>
#include <QDebug>
#include <QString>
#include <QTimer>
#include <QProcess>
#include <QApplication>
#include <QDesktopWidget>

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
    void PrintCode(QString info);

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void resetTips();

signals:
    void returnPage();

private:
    Ui::AddInfo *ui;
    QTimer *tipsDisplay;
};

#endif // ADDINFO_H
