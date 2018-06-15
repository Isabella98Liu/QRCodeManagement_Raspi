/********************************************************************************
** Form generated from reading UI file 'addinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINFO_H
#define UI_ADDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddInfo
{
public:
    QLineEdit *StdID;
    QLineEdit *Name;
    QLineEdit *College;
    QLineEdit *Major;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *AddInfo)
    {
        if (AddInfo->objectName().isEmpty())
            AddInfo->setObjectName(QStringLiteral("AddInfo"));
        AddInfo->resize(640, 480);
        StdID = new QLineEdit(AddInfo);
        StdID->setObjectName(QStringLiteral("StdID"));
        StdID->setGeometry(QRect(40, 140, 121, 21));
        Name = new QLineEdit(AddInfo);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(40, 180, 121, 24));
        College = new QLineEdit(AddInfo);
        College->setObjectName(QStringLiteral("College"));
        College->setGeometry(QRect(40, 220, 121, 24));
        Major = new QLineEdit(AddInfo);
        Major->setObjectName(QStringLiteral("Major"));
        Major->setGeometry(QRect(40, 260, 121, 24));
        pushButton = new QPushButton(AddInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 170, 161, 71));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(AddInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 30, 80, 24));

        retranslateUi(AddInfo);

        QMetaObject::connectSlotsByName(AddInfo);
    } // setupUi

    void retranslateUi(QWidget *AddInfo)
    {
        AddInfo->setWindowTitle(QApplication::translate("AddInfo", "Form", nullptr));
        pushButton->setText(QApplication::translate("AddInfo", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("AddInfo", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddInfo: public Ui_AddInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINFO_H
