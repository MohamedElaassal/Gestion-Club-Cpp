#include "registerdialog.h"
#include "ui_registerdialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QCryptographicHash>

RegisterDialog::RegisterDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

void RegisterDialog::on_registerButton_clicked()
{
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    QString confirmPassword = ui->confirmPasswordEdit->text();

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Registration Failed", "Passwords do not match.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    QByteArray hashedPassword = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256).toHex();
    query.bindValue(":password", QString(hashedPassword));

    if (!query.exec()) {
        QMessageBox::critical(this, "Registration Failed", "Failed to register user. The username might already be taken.");
    } else {
        QMessageBox::information(this, "Registration Successful", "User registered successfully.");
        accept();
    }
}
