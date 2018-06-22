/********************************************************************************
** Form generated from reading UI file 'scan.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCAN_H
#define UI_SCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scan
{
public:
    QTableView *tableView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Scan)
    {
        if (Scan->objectName().isEmpty())
            Scan->setObjectName(QStringLiteral("Scan"));
        Scan->resize(574, 400);
        tableView = new QTableView(Scan);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 40, 521, 81));
        verticalLayoutWidget = new QWidget(Scan);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 150, 271, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Scan);

        QMetaObject::connectSlotsByName(Scan);
    } // setupUi

    void retranslateUi(QWidget *Scan)
    {
        Scan->setWindowTitle(QApplication::translate("Scan", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Scan: public Ui_Scan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCAN_H
