#include "membershipdialog.h"
#include "ui_membershipdialog.h"
#include "database.h"
#include <QSqlQuery>
#include <QMessageBox>

MembershipDialog::MembershipDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MembershipDialog)
{
    ui->setupUi(this);
    setupModels();
}

MembershipDialog::~MembershipDialog()
{
    delete ui;
}

void MembershipDialog::setupModels()
{
    m_studentModel = new QSqlQueryModel(this);
    m_studentModel->setQuery("SELECT id, nom || ' ' || prenom FROM etudiants", Database::instance().getConnection());
    ui->studentComboBox->setModel(m_studentModel);
    ui->studentComboBox->setModelColumn(1);

    m_clubModel = new QSqlQueryModel(this);
    m_clubModel->setQuery("SELECT id, nom FROM clubs", Database::instance().getConnection());
    ui->clubComboBox->setModel(m_clubModel);
    ui->clubComboBox->setModelColumn(1);
}

void MembershipDialog::on_buttonBox_accepted()
{
    int studentRow = ui->studentComboBox->currentIndex();
    int studentId = m_studentModel->data(m_studentModel->index(studentRow, 0)).toInt();

    int clubRow = ui->clubComboBox->currentIndex();
    int clubId = m_clubModel->data(m_clubModel->index(clubRow, 0)).toInt();

    QSqlQuery query;
    query.prepare("INSERT INTO membres (etudiant_id, club_id) VALUES (:etudiant_id, :club_id)");
    query.bindValue(":etudiant_id", studentId);
    query.bindValue(":club_id", clubId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to add membership.");
    } else {
        accept();
    }
}
