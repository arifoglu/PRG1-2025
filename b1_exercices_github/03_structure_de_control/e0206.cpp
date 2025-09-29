#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double montant_initial, taux_interet, montant;
    int annee;

    cout << "Entrez le montant initial : ";
    cin >> montant_initial;
    
    cout << "Entrez le taux d'interet annuel en % : ";
    cin >> taux_interet;
    
    cout << "Entrez le nombre d'annees ";
    cin >> annee;

    montant = montant_initial;
    for(int i = 0; i < annee; ++i){
        montant = montant * (1. + taux_interet / 100.);
    }

    cout << "Le montant disponible après " << annee << " ans est de " << montant << " CHF " << endl;

    return 0;
}