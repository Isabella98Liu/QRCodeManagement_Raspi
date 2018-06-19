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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scan
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Scan)
    {
        if (Scan->objectName().isEmpty())
            Scan->setObjectName(QStringLiteral("Scan"));
        Scan->resize(574, 400);
        lineEdit = new QLineEdit(Scan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(440, 10, 121, 31));
        pushButton = new QPushButton(Scan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 360, 80, 24));
        tableView = new QTableView(Scan);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 50, 551, 61));
        verticalLayoutWidget = new QWidget(Scan);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 110, 351, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

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
