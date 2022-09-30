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
                    element.affiche_client(element);
                    }
                exit(0);
             }

            
        
        
    }while(b = true);
    // for (auto it = Mes_Clients.begin(); it != Mes_Clients.end(); ++it) {
    //     it.affiche_Clients();
    // }
    
    return 0;
}