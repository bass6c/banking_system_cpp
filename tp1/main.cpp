#include <iostream>
#include <vector>
#include "Clients.h"
using namespace std;

vector<Clients> Mes_Clients;
int main(){
    bool b=true;
    string it;
    do {
        cout << "\nVoulez vous saisir un nouveau client y/n:" <<endl;
        getline(cin,it);
            if (it == "y"){
                Clients c1 = Clients();
                c1 = c1.saisir_client();
                Mes_Clients.push_back(c1);
                cout <<"Clients enregistre"<<endl;
                b = true;
            }
            else {
                for (auto & element : Mes_Clients) {
                    element.affiche_client();
                    
                    
                    }
                break;
                // exit(0);
             }
            b = false;
            
            
        
        
    }while(b = true);
    // for (auto it = Mes_Clients.begin(); it != Mes_Clients.end(); ++it) {
    //     it.affiche_Clients();
    // }
    Clients bass = Mes_Clients[0];
    Clients Mayoro = Mes_Clients[1];
    bass.setCompte(Compte(bass.getCompte().getId(), 1000.00));
    Mayoro.setCompte(Compte(Mayoro.getCompte().getId(), 98.00));
    cout <<"\n****************************************************"<<endl;
    bass.affiche_client();
    Mayoro.affiche_client();
    cout <<"\n=============================================="<<endl;
    bass.crediter(Mayoro, 20.0);
    bass.affiche_client();
    Mayoro.affiche_client();
    return 0;
}