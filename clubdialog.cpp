#include "clubdialog.h"
#include "ui_clubdialog.h"
#include "database.h"
#include <QMessageBox>

ClubDialog::ClubDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClubDialog),
    m_id(0)
{
    ui->setupUi(this);
}

ClubDialog::~ClubDialog()
{
    delete ui;
}

void ClubDialog::loadData(int id)
{
    m_id = id;
    QSqlQuery query;
    query.prepare("SELECT nom, description FROM clubs WHERE id = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.next()) {
        ui->nomEdit->setText(query.value(0).toString());
        ui->descriptionEdit->setText(query.value(1).toString());
    }
}

void ClubDialog::on_buttonBox_accepted()
{
    QString nom = ui->nomEdit->text();
    QString description = ui->descriptionEdit->toPlainText();

    QSqlQuery query;
    if (m_id == 0) { // Add new
        query.prepare("INSERT INTO clubs (nom, description) VALUES (:nom, :description)");
    } else { // Update existing
        query.prepare("UPDATE clubs SET nom = :nom, description = :description WHERE id = :id");
        query.bindValue(":id", m_id);
    }
    query.bindValue(":nom", nom);
    query.bindValue(":description", description);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to save club data.");
    } else {
        accept();
    }
}
