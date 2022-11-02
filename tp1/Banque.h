#include <iostream>
#include "Clients.h"

class Banque{
    private:
    int Max_clients;
    int Nb_clients;
    Clients *tab;
    public:
    Banque(){
        this->Max_clients = 0;
        this->Nb_clients = 0;
        this->tab = NULL;
    }
    Banque(int max_clients, int nb_clients, Clients *t){
        this->Max_clients = max_clients;
        this->Nb_clients = nb_clients;
        this->tab = t;
    }
    ~Banque(){
        delete[] this->tab;
    }
    int get_Max_clients(){
        return Max_clients; 
    }
    int get_Nb_clients(){
        return Nb_clients;
    }
    Clients *get_tab(){
        return tab;
    }
    void set_Max_clients(int m){
        this->Max_clients = m;
    }
    void set_Nb_clients(int n){
        this->Nb_clients = n;
    }
    void set_tab(Clients * t){
        this->tab = t;
    }
    void Banque::afficher();
    void Banque::ajouter(Clients c);
    int Banque::appartient(Clients c);
};