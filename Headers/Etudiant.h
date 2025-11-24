#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>

class Etudiant{
    private:
        //L'etudiant compose de quatres attributs (Identifiant,Nom,Prenom,Tele)
        int id;
        std::string nom;
        std::string prenom;
        std::string tele;
        

    public:
        //Contructeur par defaut (sans parametre)
        Etudiant();

        //Contructeur parametree
        Etudiant(int ,std::string ,std::string ,std::string );

        //Constructeur de copie
        Etudiant(const Etudiant& a);
        
        //Destructeur
        ~Etudiant();
        
        //Accesseur et mutateur pour ID 
        int getId();
        void setId(int);
        
        //Accesseur et mutateur pour Nom 
        std::string getNom();
        void setNom(std::string);

        //Accesseur et mutateur pour Prenom 
        std::string getPrenom();
        void setPrenom(std::string);

        //Accesseur et mutateur pour Tele 
        std::string getTele();
        void setTele(std::string);

};