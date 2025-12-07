#include "studentdialog.h"
#include "ui_studentdialog.h"
#include "database.h"
#include <QMessageBox>

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog),
    m_id(0)
{
    ui->setupUi(this);
}

StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::loadData(int id)
{
    m_id = id;
    QSqlQuery query;
    query.prepare("SELECT nom, prenom, tele FROM etudiants WHERE id = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.next()) {
        ui->nomEdit->setText(query.value(0).toString());
        ui->prenomEdit->setText(query.value(1).toString());
        ui->teleEdit->setText(query.value(2).toString());
    }
}

void StudentDialog::on_buttonBox_accepted()
{
    QString nom = ui->nomEdit->text();
    QString prenom = ui->prenomEdit->text();
    QString tele = ui->teleEdit->text();

    QSqlQuery query;
    if (m_id == 0) { // Add new
        query.prepare("INSERT INTO etudiants (nom, prenom, tele) VALUES (:nom, :prenom, :tele)");
    } else { // Update existing
        query.prepare("UPDATE etudiants SET nom = :nom, prenom = :prenom, tele = :tele WHERE id = :id");
        query.bindValue(":id", m_id);
    }
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":tele", tele);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to save student data.");
    } else {
        accept();
    }
}
