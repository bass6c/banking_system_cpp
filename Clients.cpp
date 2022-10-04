#include <iostream>
// #include "Compte.h"
#include "Clients.h"
// #include "Date.h"
#include <string.h>
#include <vector>
using namespace std;


Clients Clients::saisir_client(){
    string name;
    char strr[100];
    vector<string> date_info;
    int j; int m; int an;
    cout << "Entrer votre Nom: "<< endl;
    getline(cin,name);
    cout <<"Entrer votre date de naissance format jj/mm/aaaa: " <<endl;
    cin.getline(strr,100);
    char delimiter = '/';
    char *ptr = strtok(strr, &delimiter);
    string temp;
    while(ptr!=NULL){
      temp = ptr;
      date_info.push_back(temp);
      ptr = strtok(NULL,&delimiter);
    }

    j = stoi(date_info[0]);
    m = stoi(date_info[1]);
    an = stoi(date_info[2]);
    // generate ID for Compte
    string id = "";
    for (int i = 0; i<6; i++){
        id = id + to_string(rand()%10);
    }
    string Id_compte = name + id +strr[8]+strr[9];
    return Clients(name, Date(j,m,an), Compte(Id_compte,0.00));

}
void Clients::affiche_client(){
    cout << "Nom: "<< this->getName() << endl;
    cout << "ID: "<<this->compte.getId() << endl;
    cout << "Date de naissance: " << this->date.affiche_Date() << endl;
    cout << "Solde de compte: "<< this->compte.getSolde() << endl;

}
void Clients::crediter(Clients c2, double montant){
    auto temp = (*this).compte.getSolde();
    if (temp < montant){
        cout <<"votre solde de compte est insuffisant"<<endl;
    }
    else {
        c2.setCompte(Compte(c2.compte.getId(), c2.compte.getSolde()+montant)); 
        (*this).compte.setSolde(temp - montant);
    }

}