/********************************************************************************
** Form generated from reading UI file 'manage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_H
#define UI_MANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manage
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *Manage)
    {
        if (Manage->objectName().isEmpty())
            Manage->setObjectName(QStringLiteral("Manage"));
        Manage->resize(640, 480);
        tableView = new QTableView(Manage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 60, 521, 411));
        pushButton = new QPushButton(Manage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 80, 24));

        retranslateUi(Manage);

        QMetaObject::connectSlotsByName(Manage);
    } // setupUi

    void retranslateUi(QWidget *Manage)
    {
        Manage->setWindowTitle(QApplication::translate("Manage", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Manage", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Manage: public Ui_Manage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_H
