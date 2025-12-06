QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gestion-Club-Qt
TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp \
    database.cpp \
    studentdialog.cpp \
    clubdialog.cpp \
    logindialog.cpp \
    registerdialog.cpp \
    membershipdialog.cpp

HEADERS  += mainwindow.h \
    database.h \
    studentdialog.h \
    clubdialog.h \
    logindialog.h \
    registerdialog.h \
    membershipdialog.h

FORMS    += mainwindow.ui \
    studentdialog.ui \
    clubdialog.ui \
    logindialog.ui \
    registerdialog.ui \
    membershipdialog.ui

RESOURCES += resources.qrc

# Re-run qmake


