#include "mainwindow.h"
#include "database.h"
#include "logindialog.h"
#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Load stylesheet
    QFile file(":/style.qss");
    if (file.open(QFile::ReadOnly | QFile::Text)) {
        QTextStream stream(&file);
        a.setStyleSheet(stream.readAll());
        file.close();
    }


    if (!Database::instance().open()) {
        QMessageBox::critical(nullptr, "Database Error", "Could not connect to the database.");
        return 1;
    }

    LoginDialog loginDialog;
    if (loginDialog.exec() == QDialog::Accepted) {
        MainWindow w;
        w.show();
        return a.exec();
    }

    return 0;
}
