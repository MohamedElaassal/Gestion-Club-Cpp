#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include "studentdialog.h"
#include "clubdialog.h"
#include "membershipdialog.h"
#include <QMessageBox>
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupModels();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupModels()
{
    m_studentModel = new QSqlTableModel(this, Database::instance().getConnection());
    m_studentModel->setTable("etudiants");
    m_studentModel->select();
    ui->studentTableView->setModel(m_studentModel);

    m_clubModel = new QSqlTableModel(this, Database::instance().getConnection());
    m_clubModel->setTable("clubs");
    m_clubModel->select();
    ui->clubTableView->setModel(m_clubModel);

    m_membershipModel = new QSqlQueryModel(this);
    m_membershipModel->setQuery("SELECT m.id, e.nom || ' ' || e.prenom, c.nom FROM membres m JOIN etudiants e ON m.etudiant_id = e.id JOIN clubs c ON m.club_id = c.id", Database::instance().getConnection());
    m_membershipModel->setHeaderData(1, Qt::Horizontal, "Student");
    m_membershipModel->setHeaderData(2, Qt::Horizontal, "Club");
    ui->membershipTableView->setModel(m_membershipModel);
    ui->membershipTableView->hideColumn(0);
}

void MainWindow::on_addStudentButton_clicked()
{
    StudentDialog dialog(this);
    QPropertyAnimation *animation = new QPropertyAnimation(&dialog, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    if (dialog.exec() == QDialog::Accepted) {
        m_studentModel->select();
    }
}

void MainWindow::on_editStudentButton_clicked()
{
    QModelIndexList selected = ui->studentTableView->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a student to edit.");
        return;
    }
    int row = selected.first().row();
    int id = m_studentModel->data(m_studentModel->index(row, 0)).toInt();

    StudentDialog dialog(this);
    dialog.loadData(id);
    QPropertyAnimation *animation = new QPropertyAnimation(&dialog, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    if (dialog.exec() == QDialog::Accepted) {
        m_studentModel->select();
    }
}

void MainWindow::on_deleteStudentButton_clicked()
{
    QModelIndexList selected = ui->studentTableView->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a student to delete.");
        return;
    }
    int row = selected.first().row();
    m_studentModel->removeRow(row);
    m_studentModel->submitAll();
    m_studentModel->select();
}

void MainWindow::on_addClubButton_clicked()
{
    ClubDialog dialog(this);
    QPropertyAnimation *animation = new QPropertyAnimation(&dialog, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    if (dialog.exec() == QDialog::Accepted) {
        m_clubModel->select();
    }
}

void MainWindow::on_editClubButton_clicked()
{
    QModelIndexList selected = ui->clubTableView->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a club to edit.");
        return;
    }
    int row = selected.first().row();
    int id = m_clubModel->data(m_clubModel->index(row, 0)).toInt();

    ClubDialog dialog(this);
    dialog.loadData(id);
    QPropertyAnimation *animation = new QPropertyAnimation(&dialog, "windowOpacity");
    animation->setDuration(500);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    if (dialog.exec() == QDialog::Accepted) {
        m_clubModel->select();
    }
}

void MainWindow::on_deleteClubButton_clicked()
{
    QModelIndexList selected = ui->clubTableView->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a club to delete.");
        return;
    }
    int row = selected.first().row();
    m_clubModel->removeRow(row);
    m_clubModel->submitAll();
    m_clubModel->select();
}

void MainWindow::on_studentSearchEdit_textChanged(const QString &arg1)
{
    m_studentModel->setFilter(QString("nom LIKE '%%1%'").arg(arg1));
}

void MainWindow::on_clubSearchEdit_textChanged(const QString &arg1)
{
    m_clubModel->setFilter(QString("nom LIKE '%%1%'").arg(arg1));
}

void MainWindow::on_addMembershipButton_clicked()
{
    MembershipDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        updateMembershipFilter();
    }
}

void MainWindow::on_removeMembershipButton_clicked()
{
    QModelIndexList selected = ui->membershipTableView->selectionModel()->selectedRows();
    if (selected.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a membership to remove.");
        return;
    }
    int row = selected.first().row();
    int id = m_membershipModel->data(m_membershipModel->index(row, 0)).toInt();

    QSqlQuery query;
    query.prepare("DELETE FROM membres WHERE id = :id");
    query.bindValue(":id", id);
    if (query.exec()) {
        updateMembershipFilter();
    } else {
        QMessageBox::critical(this, "Error", "Failed to remove membership.");
    }
}

void MainWindow::on_studentFilterEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    updateMembershipFilter();
}

void MainWindow::on_clubFilterEdit_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    updateMembershipFilter();
}
void MainWindow::updateMembershipFilter()
{
    QString studentFilter = ui->studentFilterEdit->text();
    QString clubFilter = ui->clubFilterEdit->text();

    QString queryString = "SELECT m.id, e.nom || ' ' || e.prenom, c.nom FROM membres m JOIN etudiants e ON m.etudiant_id = e.id JOIN clubs c ON m.club_id = c.id";
    QString whereClause;

    if (!studentFilter.isEmpty()) {
        whereClause += QString("(e.nom LIKE '%%1%' OR e.prenom LIKE '%%1%')").arg(studentFilter);
    }

    if (!clubFilter.isEmpty()) {
        if (!whereClause.isEmpty()) {
            whereClause += " AND ";
        }
        whereClause += QString("c.nom LIKE '%%1%'").arg(clubFilter);
    }

    if (!whereClause.isEmpty()) {
        queryString += " WHERE " + whereClause;
    }

    m_membershipModel->setQuery(queryString, Database::instance().getConnection());
}
