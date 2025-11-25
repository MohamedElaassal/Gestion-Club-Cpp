
***************************Système de Gestion des Clubs Universitaire****************************************
projet console if still time we'll vibecode the gui with c++ (2 versions)
-->SGBD : MySQL
Fonctionnalités minimales


**hadxhi b ordre hit kancréyiw club , kan_créyiw des etudiants et aprés kan associwhom l un club 
-->Gérer les clubs
Ajouter, modifier, Supprimer et Afficher la liste des clubs

-->Gérer les étudiants
Ajouter, modifier, Supprimer et Afficher la liste des étudiants

-->Gérer les membre d'un club 
Ajouter un etudiant à un club, modifier, Supprimer et Afficher la liste des membre


f console/gui: dashboard (statitiques)
Associer un étudiant à un club
Rapports simples (nombre étudiants par club...)
Afficher la liste des membres d’un club
Afficher le nombre de clubs 

*************************************
implémentation :
console : 
MySQL & phpMyAdmin are docker containers 
back-end (c++) is a docker container (7na ghanktbo docker file bach ncontoriziwha)

gui :
ghankhdmo b MVC & DAO (4 folders model, view, controller , doa)
**************************************
mli ghanssaliw projet ghaktbo wahd docker-compose for the whole prject back une fois tcloni projet dir docker compose up -d ytranna lik
**************************************

conception console : 
1. Gérer les clubs
 1.0 afficher
 1.1 ajouter
 1.2 modifier
 1.3 supprimer

2. Gérer les étudiants
 2.0 afficher
 2.1 ajouter
 2.2 modifier
 2.3 supprimer

3. associer un étudiant à un club


4. Rapports
 3.0 liste des clubs (statistics)
 3.1 liste des etudiants (statistics)
  .
  .
  .

5. Quitter
**************************************
conception database :
CREATE DATABASE gestion_clubs;
USE gestion_clubs;

CREATE TABLE clubs (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nom VARCHAR(100) NOT NULL
    description VARCHAR(100) NOT NULL,
);

CREATE TABLE etudiants (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nom VARCHAR(100) NOT NULL,
    prenom VARCHAR(100) NOT NULL,
    tele VARCHAR(20)
);

CREATE TABLE membres (
    etudiant_id INT,
    club_id INT,
    role VARCHAR(100) NOT NULL,
    PRIMARY KEY (etudiant_id, club_id),
    FOREIGN KEY (club_id) REFERENCES clubs(id),
    FOREIGN KEY (etudiant_id) REFERENCES etudiants(id)
);

