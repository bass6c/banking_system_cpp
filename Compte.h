#include <iostream>
using namespace std;
class Compte {
    private : 
    string Id;
    double Solde;
    // string Name;

    public:
    Compte(){
        Id = "";
        Solde = 0.0;
    }
    Compte(string id, double solde){
        Id = id;
        Solde = solde;
        // Name = name;
    } 
    double getSolde(){
        return Solde;
    }
    string getId(){
        return Id;
    }
    // string getName(){
        // return Name;
    // }
    void setID(string id){
        Id = id;
    }
    void setSolde(double solde){
        Solde = solde;
    }
    // void setName(string name){
        // Name = name;
    // }
    void depot(Compte c);
    void retrait (Compte c);
    void affiche_compte(Compte c);
    void virer(Compte c1, Compte c2);

};