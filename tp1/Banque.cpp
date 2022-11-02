#include <iostream>
#include "Banque.h"
using namespace std;

void Banque::afficher(){
    for (int i=0;i<this->Nb_clients; ++i){
        (this->tab+i)->affiche_client();
    }
}
void Banque::ajouter(Clients c){
    *(this->tab+this->Nb_clients) = c;
    this->Nb_clients++;
}
int Banque::appartient(Clients c){
    int i = 0;
    int boolean = 0;
    while (i<=this->Nb_clients){
        if ((this->tab+i)->getCompte().getId() == c.getCompte().getId()){
            break;
            boolean = 1;
        }
        else{i++;}
    }
    return boolean;
}
ostream& operator << (ostream& out, Banque& l){
    out << "Nombre de Clients :" << l.get_Nb_clients() << endl;
    l.afficher();
    return out;

}

