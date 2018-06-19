#ifndef SCAN_H
#define SCAN_H

#include <QWidget>
#include <QTableView>
#include <QDesktopWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QString>
#include <QFile>
#include <QCloseEvent>
#include <QTimer>
#include <QZXing.h>

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
    QTimer *timer1;
    QString folderfath;
    QString index;
    QCamera *camera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCapture;
    void decodeQRCode(QImage);

private slots:
    void on_pushButton_clicked();

public slots:
    void captureImage();
    void saveImage(int, QImage);

signals:
    void buttonClicked();

private:
    Ui::Scan *ui;

};

#endif // SCAN_H
