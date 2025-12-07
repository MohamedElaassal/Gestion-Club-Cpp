QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TARGET = Gestion-Club-Qt
TEMPLATE = app

# Include paths
INCLUDEPATH += include \
               include/dialogs \
               include/database

# Source files
SOURCES += src/main.cpp \
    src/mainwindow.cpp \
    src/database/database.cpp \
    src/dialogs/studentdialog.cpp \
    src/dialogs/clubdialog.cpp \
    src/dialogs/logindialog.cpp \
    src/dialogs/registerdialog.cpp \
    src/dialogs/membershipdialog.cpp

# Header files
HEADERS  += include/mainwindow.h \
    include/database/database.h \
    include/dialogs/studentdialog.h \
    include/dialogs/clubdialog.h \
    include/dialogs/logindialog.h \
    include/dialogs/registerdialog.h \
    include/dialogs/membershipdialog.h

# UI files
FORMS    += ui/mainwindow.ui \
    ui/studentdialog.ui \
    ui/clubdialog.ui \
    ui/logindialog.ui \
    ui/registerdialog.ui \
    ui/membershipdialog.ui

# Resources
RESOURCES += resources/resources.qrc

# Output directories
OBJECTS_DIR = build/obj
MOC_DIR = build/moc
RCC_DIR = build/rcc
UI_DIR = build/ui

# Re-run qmake after changing this file


