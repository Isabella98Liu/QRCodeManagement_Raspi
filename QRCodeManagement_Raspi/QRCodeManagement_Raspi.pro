#-------------------------------------------------
#
# Project created by QtCreator 2018-06-13T20:17:24
#
#-------------------------------------------------

QT       +=     core gui widgets multimedia multimediawidgets
QT       +=     sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QRCodeManagement_Raspi
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    1_Menu/menu.cpp \
    2_Manage/manage.cpp \
    3_Scan/scan.cpp \
    4_AddInfo/addinfo.cpp \
    SQLite/database.cpp

HEADERS += \
        mainwindow.h \
    1_Menu/menu.h \
    2_Manage/manage.h \
    3_Scan/scan.h \
    4_AddInfo/addinfo.h \
    SQLite/database.h \
    QSS/qss.h

FORMS += \
        mainwindow.ui \
    1_Menu/menu.ui \
    2_Manage/manage.ui \
    3_Scan/scan.ui \
    4_AddInfo/addinfo.ui

RESOURCES += \
    qresource.qrc
