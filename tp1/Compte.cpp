#include <iostream>
#include "Compte.h"
using namespace std;

void Compte::affiche_compte(Compte c){
    cout << "Compte ID: "<< c.getId() << endl;
    // cout <<"Compte Name: "<< c.getName() <<  endl;
    cout <<"Compte Solde: "<< c.getSolde() << endl;
}

void Compte::depot(Compte c){
    int montant;
    cout <<"saisir le montant de depot : " << endl;
    cin>>montant;
    int temp = c.getSolde();
    c.setSolde(temp+montant);

}
void Compte::retrait (Compte c){
    cout <<"saisir le montant a retirer : " << endl;
    int montant;
    cin>>montant;
    int temp = c.getSolde();
    c.setSolde(temp - montant);
}
void Compte::virer(Compte c1, Compte c2){
    int montant;
    cout <<"saisir le montant a virer vers le compte C2"<< endl;
    while (true)
    {
        cin>>montant;
        if (montant > c1.getSolde())
        {
            cout << "solde de compte insuffisant\n" << endl;
            cout <<"saisir le montant a virer : " << endl;
        }
        else 
        {
            break;
        }
    }
    
    
    
    int temp1 = c1.getSolde();
    int temp2 = c2.getSolde();
    c1.setSolde(temp1 - montant);
    c2.setSolde(temp2 + montant);


}