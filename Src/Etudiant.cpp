#include <iostream>
#include <string>
#include "Headers/Etudiant.h"
using namespace std;
//Contructeur par defaut (sans parametre)
Etudiant::Etudiant(){
    cout<<"Consructeur par defaut."<<endl;
}

//Contructeur parametree
Etudiant::Etudiant(int id,string nom ,string prenom,string tele ){
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->tele = tele;
}

//Constructeur de copie
Etudiant::Etudiant(const Etudiant& a){
    id = a.id;
    nom = a.nom;
    prenom = a.prenom;
    tele = a.tele;
}
        
//Destructeur
Etudiant::~Etudiant(){
    cout<<"L'objet etudiant a ete detruit avec succees."<<endl;
}
        
//Accesseur et mutateur pour ID 
int Etudiant::getId(){
    return this->id;
}
void Etudiant::setId(int id){
    this->id = id;
}
    
//Accesseur et mutateur pour Nom 
string Etudiant::getNom(){
    return this->nom;
}
void Etudiant::setNom(string nom){
    this->nom=nom;
}

//Accesseur et mutateur pour Prenom 
string Etudiant::getPrenom(){
    return this->prenom;
}
void Etudiant::setPrenom(string prenom){
    this->prenom=prenom;
}

//Accesseur et mutateur pour Tele 
string Etudiant::getTele(){
    return this->tele;
}
void Etudiant::setTele(string tele){
    this->tele=tele;
}