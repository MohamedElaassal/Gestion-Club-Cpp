#include <iostream>
#include <string>
#include "Headers/Club.h"
using namespace std;
//Contructeur par defaut (sans parametre)
Club::Club(){
    cout<<"Consructeur par defaut."<<endl;
}

//Contructeur parametree
Club::Club(int id,string nom ,string description ){
    this->id = id;
    this->nom = nom;
    this->description = description;
}

//Constructeur de copie
Club::Club(const Club& a){
    id = a.id;
    nom = a.nom;
    description = a.description;
}
        
//Destructeur
Club::~Club(){
    cout<<"L'objet club a ete detruit avec succees."<<endl;
}
        
//Accesseur et mutateur pour ID 
int Club::getId(){
    return this->id;
}
void Club::setId(int id){
    this->id = id;
}
    
//Accesseur et mutateur pour Nom 
string Club::getNom(){
    return this->nom;
}
void Club::setNom(string nom){
    this->nom=nom;
}

//Accesseur et mutateur pour Description 
string Club::getDescription(){
    return this->description;
}
void Club::setDescription(string description){
    this->description=description;
}