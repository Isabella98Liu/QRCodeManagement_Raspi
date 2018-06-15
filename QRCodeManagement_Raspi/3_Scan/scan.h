#ifndef SCAN_H
#define SCAN_H

#include <QWidget>
#include <QTableView>
#include "SQLite/database.h"

namespace Ui {
class Scan;
}

class Scan : public QWidget
{
    Q_OBJECT

public:
    explicit Scan(QWidget *parent = 0);
    ~Scan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Scan *ui;
};

#endif // SCAN_H
