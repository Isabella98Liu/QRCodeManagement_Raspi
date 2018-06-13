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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddInfo
{
public:

    void setupUi(QWidget *AddInfo)
    {
        if (AddInfo->objectName().isEmpty())
            AddInfo->setObjectName(QStringLiteral("AddInfo"));
        AddInfo->resize(640, 480);

        retranslateUi(AddInfo);

        QMetaObject::connectSlotsByName(AddInfo);
    } // setupUi

    void retranslateUi(QWidget *AddInfo)
    {
        AddInfo->setWindowTitle(QApplication::translate("AddInfo", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddInfo: public Ui_AddInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINFO_H
