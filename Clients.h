#include <iostream>
#include "Compte.h"
#include <string>
#include "Date.h"
using namespace std;

class Clients {
    private :
    string Name;
    Date date;
    Compte compte;
    string Id_clients;
    public :
    Clients(){
        Name = "name";
        date = Date(0,0,0);
        compte = Compte("id", 0.00);
    }
    Clients(string name, Date d,Compte c){
        Name = name;
        date = d;
        compte = c;

    }
    string getName (){return Name;}
    Date getDate (){return date;}
    Compte getCompte (){return compte;}
    void setName(string n){Name = n;}
    void setDate(Date d){date = d;}
    void setCompte(Compte c){compte = c;}
    Clients saisir_client();
    void affiche_client();
    void crediter(Clients c1, double montant);

    
    

};