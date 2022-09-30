#include <iostream>
#include <string>
using namespace std;

class Date {
    private :
    int jour;
    int mois;
    int annee;
    public:
    Date(){
        jour,mois,annee = 0;
    }
    Date(int j, int m, int an){
        jour = j;
        mois = m;
        annee = an;
    

    }
    int getJour(){return jour;}
    int getMois(){return mois;}
    int getName(){return annee;}
    void setJour(int j){jour = j;}
    void setMois(int m){mois = m;}
    void setAnnee(int an){annee = an;}

    string affiche_Date (){
        int jj = jour; int mm = mois; int ann = annee;
        string str = to_string(jj) + "/" + to_string(mm) + "/" + to_string(ann);
        return str;
    }
};
