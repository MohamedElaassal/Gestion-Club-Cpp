#include "database.h"
#include <QDebug>

Database& Database::instance() {
    static Database inst;
    return inst;
}

Database::Database() {
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("gestion_club.db");
}

Database::~Database() {
    if (m_db.isOpen()) {
        m_db.close();
    }
}

bool Database::open() {
    if (m_db.isOpen()) {
        return true;
    }

    if (!m_db.open()) {
        qDebug() << "Error: connection with database failed:" << m_db.lastError();
        return false;
    }

    qDebug() << "Database: connection ok";

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS etudiants (id INTEGER PRIMARY KEY AUTOINCREMENT, nom TEXT, prenom TEXT, tele TEXT)");
    query.exec("CREATE TABLE IF NOT EXISTS clubs (id INTEGER PRIMARY KEY AUTOINCREMENT, nom TEXT, description TEXT)");
    query.exec("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY AUTOINCREMENT, username TEXT UNIQUE, password TEXT)");
    query.exec("CREATE TABLE IF NOT EXISTS membres (id INTEGER PRIMARY KEY AUTOINCREMENT, etudiant_id INTEGER, club_id INTEGER, FOREIGN KEY(etudiant_id) REFERENCES etudiants(id), FOREIGN KEY(club_id) REFERENCES clubs(id))");

    return true;
}

void Database::close() {
    if (m_db.isOpen()) {
        m_db.close();
    }
}

QSqlDatabase Database::getConnection() {
    return m_db;
}
