/********************************************************************************
** Form generated from reading UI file 'addinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINFO_H
#define UI_ADDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QLabel *Tips;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *AddInfo)
    {
        if (AddInfo->objectName().isEmpty())
            AddInfo->setObjectName(QStringLiteral("AddInfo"));
        AddInfo->resize(640, 480);
        StdID = new QLineEdit(AddInfo);
        StdID->setObjectName(QStringLiteral("StdID"));
        StdID->setGeometry(QRect(160, 120, 121, 21));
        Name = new QLineEdit(AddInfo);
        Name->setObjectName(QStringLiteral("Name"));
        Name->setGeometry(QRect(160, 190, 121, 24));
        College = new QLineEdit(AddInfo);
        College->setObjectName(QStringLiteral("College"));
        College->setGeometry(QRect(160, 260, 121, 24));
        Major = new QLineEdit(AddInfo);
        Major->setObjectName(QStringLiteral("Major"));
        Major->setGeometry(QRect(160, 330, 121, 24));
        pushButton = new QPushButton(AddInfo);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 200, 161, 71));
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(AddInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 30, 80, 24));
        Tips = new QLabel(AddInfo);
        Tips->setObjectName(QStringLiteral("Tips"));
        Tips->setGeometry(QRect(250, 420, 161, 21));
        label = new QLabel(AddInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 120, 51, 21));
        label_2 = new QLabel(AddInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 190, 51, 21));
        label_3 = new QLabel(AddInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 260, 51, 21));
        label_4 = new QLabel(AddInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 330, 51, 21));

        retranslateUi(AddInfo);

        QMetaObject::connectSlotsByName(AddInfo);
    } // setupUi

    void retranslateUi(QWidget *AddInfo)
    {
        AddInfo->setWindowTitle(QApplication::translate("AddInfo", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddInfo", "\346\267\273\345\212\240\350\256\260\345\275\225", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AddInfo", "\350\277\224\345\233\236", Q_NULLPTR));
        Tips->setText(QString());
        label->setText(QApplication::translate("AddInfo", "\345\255\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddInfo", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddInfo", "\345\255\246\351\231\242\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddInfo", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddInfo: public Ui_AddInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINFO_H
