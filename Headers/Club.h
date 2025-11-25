#ifndef CLUB_H
#define CLUB_H
#include <string>

class Club{
    private:
        //Le club compose de trois attributs (Identifiant,Nom,Description)
        int id;
        std::string nom;
        std::string description;
        

    public:
        //Contructeur par defaut (sans parametre)
        Club();

        //Contructeur parametree
        Club(int ,std::string ,std::string );

        //Constructeur de copie
        Club(const Club& a);
        
        //Destructeur
        ~Club();
        
        //Accesseur et mutateur pour ID 
        int getId();
        void setId(int);
        
        //Accesseur et mutateur pour Nom 
        std::string getNom();
        void setNom(std::string);

        //Accesseur et mutateur pour Description 
        std::string getDescription();
        void setDescription(std::string);

};

#endif