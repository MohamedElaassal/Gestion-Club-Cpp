#include "Etudiant.h"
#include "Database.h"
#include <iostream>
using namespace std;



int main(){
    cout<<"---------------GESTIONNAIRE DE CLUBS--------------- "<<endl;
    Etudiant e1(1111,"Elouattab","hamza","078787878");
    e1.affihcerInfos();

     // Connexion à la base de données
    Database db("localhost", "root", "", "gestion_club");
    
    if (db.connect()) {
        cout << "\nBase de donnees connectee avec succes!\n" << endl;
        
       
    }
    return 0;
}