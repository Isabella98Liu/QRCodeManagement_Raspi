#include "scan.h"
#include "ui_scan.h"

Scan::Scan(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Scan)
{
    //  move current window to the center of the screen
    QDesktopWidget* desktop = QApplication::desktop();
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    ui->setupUi(this);
    folderfath = qApp->applicationDirPath() + QString("/QRCodes/");  // file directory to store the QRCode pics
    camera = new QCamera(this);
    viewfinder = new QCameraViewfinder(this);
    imageCapture = new QCameraImageCapture(camera);
    //  timer for capture image
    timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(captureImage()));
    timer1->start(1000);

    //  capture image
//    connect(this, SIGNAL(buttonClicked()), this, SLOT(captureImage()));

    // save image once captured it
    connect(imageCapture, SIGNAL(imageCaptured(int,QImage)), this, SLOT(saveImage(int,QImage)));
    //set viewfinder
    ui->verticalLayout->addWidget(viewfinder);
    camera->setViewfinder(viewfinder);
    camera->start();
}

Scan::~Scan()
{
    delete ui;
}

void Scan::decodeQRCode(QImage img)
{
    QZXing decoder;
    decoder.setDecoder( QZXing::DecoderFormat_QR_CODE | QZXing::DecoderFormat_EAN_13);
    QString result = decoder.decodeImage(img);
//    qDebug() << "---------------The decode content is : " + result + "--------------------";
    qDebug() << result;
    Database database;
    ui->tableView->setModel(database.DatabaseSelect(result));
}

//---------------------------SLOTS-----------------------------

void Scan::on_pushButton_clicked()  //  if the search button was clicked
{
//    index = ui->lineEdit->text();
    emit buttonClicked();
    Database database;
    ui->tableView->setModel(database.DatabaseSelect(index));
}

void Scan::captureImage()
{
    imageCapture->capture();
}

void Scan::saveImage(int i, QImage img)
{
    QString fileName = folderfath + index;
    if(!img.isNull())
    {
        qDebug() << fileName + "scanPic.jpg";
        QFile file(QString(fileName + "1.jpg"));
        file.open(QIODevice::WriteOnly);
        img.save(&file, "JPG");
        decodeQRCode(img);
    }
}
