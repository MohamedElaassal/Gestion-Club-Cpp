#ifndef DATABASE_H
#define DATABASE_H

#include <mysql/mysql.h>
#include <string>
#include <iostream>

class Database {
private:
    MYSQL* conn;
    std::string host;
    std::string user;
    std::string password;
    std::string database;
    unsigned int port;

public:
    // Constructeurs
    Database();
    Database(std::string host, std::string user, std::string password, 
             std::string database, unsigned int port = 3306);
    
    // Destructeur
    ~Database();
    
    // Méthodes de connexion
    bool connect();
    void disconnect();
    bool isConnected();
    
    // Exécution de requêtes
    MYSQL_RES* executeQuery(std::string query);
    bool executeUpdate(std::string query);
    
    // Accesseur
    MYSQL* getConnection();
};

#endif