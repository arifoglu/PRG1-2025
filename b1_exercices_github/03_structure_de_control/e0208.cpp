#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double montant_initial, taux_interet, montant;
    int annee;

    do{
        cout << "Entrez le montant initial : ";
        cin >> montant_initial;
    }while(montant_initial < 1000 );
    
    do{
        cout << "Entrez le taux d'interet annuel en % : ";
        cin >> taux_interet;
    }while(taux_interet < -5 || taux_interet > 50);

     do{
        cout << "Entrez le nombre d'annees ";
        cin >> annee;
    }while(annee <= 0);

    montant = montant_initial;
    for(int i = 0; i < annee; ++i){
        montant = montant * (1. + taux_interet / 100.);
    }

    cout << "Le montant disponible après " << annee << " ans est de " << montant << " CHF " << endl;

    return 0;
}