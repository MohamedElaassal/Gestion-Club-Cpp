-- Création de la base de données
CREATE DATABASE IF NOT EXISTS gestion_club;
USE gestion_club;

-- Table des étudiants
CREATE TABLE IF NOT EXISTS etudiants (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nom VARCHAR(100) NOT NULL,
    prenom VARCHAR(100) NOT NULL,
    tele VARCHAR(20)
);

-- Table des clubs
CREATE TABLE IF NOT EXISTS clubs (
    id INT PRIMARY KEY AUTO_INCREMENT,
    nom VARCHAR(100) NOT NULL,
    description TEXT
);

-- Table des membres (relation entre étudiants et clubs)
CREATE TABLE IF NOT EXISTS membres (
    id INT PRIMARY KEY AUTO_INCREMENT,
    etudiant_id INT NOT NULL,
    club_id INT NOT NULL,
    date_adhesion DATE,
    FOREIGN KEY (etudiant_id) REFERENCES etudiants(id) ON DELETE CASCADE,
    FOREIGN KEY (club_id) REFERENCES clubs(id) ON DELETE CASCADE
);

-- Insertion de données de test
INSERT INTO etudiants (nom, prenom, tele) VALUES 
('Elaassal', 'Mohamed', '0612345678'),
('Alami', 'Sara', '0623456789'),
('Bennani', 'Ahmed', '0634567890');

INSERT INTO clubs (nom, description) VALUES 
('Club Informatique', 'Club dedié au développement informatique'),
('Club Sport', 'Club des activités sportives'),
('Club Culture', 'Club des activités culturelles');