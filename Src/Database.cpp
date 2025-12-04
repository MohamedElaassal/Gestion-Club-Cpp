#include "Database.h"
#include <iostream>
using namespace std;

// Constructeur par défaut
Database::Database() {
    conn = nullptr;
    host = "localhost";
    user = "root";
    password = "";
    database = "gestion_club";
    port = 3306;
}

// Constructeur paramétré
Database::Database(string host, string user, string password, string database, unsigned int port) {
    this->conn = nullptr;
    this->host = host;
    this->user = user;
    this->password = password;
    this->database = database;
    this->port = port;
}

// Destructeur
Database::~Database() {
    disconnect();
    cout << "L'objet database a ete detruit avec succees." << endl;
}

/// Méthode de connexion
bool Database::connect() {
    conn = mysql_init(nullptr);
    
    if (conn == nullptr) {
        cerr << "Erreur d'initialisation MySQL: " << mysql_error(conn) << endl;
        return false;
    }
    
    // Connexion simple sans SSL
    if (mysql_real_connect(conn, host.c_str(), user.c_str(), password.c_str(), 
                          database.c_str(), port, nullptr, 0) == nullptr) {
        cerr << "Erreur de connexion a la base de donnees: " << mysql_error(conn) << endl;
        mysql_close(conn);
        conn = nullptr;
        return false;
    }
    
    cout << "Connexion a la base de donnees '" << database << "' reussie!" << endl;
    return true;
}
// Méthode de déconnexion
void Database::disconnect() {
    if (conn != nullptr) {
        mysql_close(conn);
        conn = nullptr;
        cout << "Deconnexion de la base de donnees reussie." << endl;
    }
}

// Vérifier si connecté
bool Database::isConnected() {
    return (conn != nullptr);
}

// Accesseur pour la connexion
MYSQL* Database::getConnection() {
    return conn;
}

// Exécuter une requête SELECT
MYSQL_RES* Database::executeQuery(string query) {
    if (!isConnected()) {
        cerr << "Erreur: Pas de connexion a la base de donnees." << endl;
        return nullptr;
    }
    
    if (mysql_query(conn, query.c_str()) != 0) {
        cerr << "Erreur d'execution de la requete: " << mysql_error(conn) << endl;
        return nullptr;
    }
    
    MYSQL_RES* result = mysql_store_result(conn);
    return result;
}

// Exécuter une requête INSERT, UPDATE, DELETE
bool Database::executeUpdate(string query) {
    if (!isConnected()) {
        cerr << "Erreur: Pas de connexion a la base de donnees." << endl;
        return false;
    }
    
    if (mysql_query(conn, query.c_str()) != 0) {
        cerr << "Erreur d'execution de la requete: " << mysql_error(conn) << endl;
        return false;
    }
    
    cout << "Requete executee avec succes. Lignes affectees: " << mysql_affected_rows(conn) << endl;
    return true;
}