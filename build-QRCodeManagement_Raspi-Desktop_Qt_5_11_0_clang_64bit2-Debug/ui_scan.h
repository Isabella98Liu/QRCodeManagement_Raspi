/********************************************************************************
** Form generated from reading UI file 'scan.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAN_H
#define UI_SCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scan
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QWidget *Scan)
    {
        if (Scan->objectName().isEmpty())
            Scan->setObjectName(QStringLiteral("Scan"));
        Scan->resize(640, 480);
        lineEdit = new QLineEdit(Scan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(500, 20, 121, 31));
        pushButton = new QPushButton(Scan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 360, 80, 24));
        tableView = new QTableView(Scan);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 90, 551, 251));

        retranslateUi(Scan);

        QMetaObject::connectSlotsByName(Scan);
    } // setupUi

    void retranslateUi(QWidget *Scan)
    {
        Scan->setWindowTitle(QApplication::translate("Scan", "Form", nullptr));
        pushButton->setText(QApplication::translate("Scan", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scan: public Ui_Scan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAN_H
