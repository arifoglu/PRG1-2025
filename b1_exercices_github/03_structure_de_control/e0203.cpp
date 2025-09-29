#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double montant_initial, montant_cible, taux_interet, montant;
    int annee;

    cout << "Entrez le montant initial : ";
    cin >> montant_initial;
    
    cout << "Entrez le montant cible : ";
    cin >> montant_cible;
    
    cout << "Entrez le taux d'interet annuel en % : ";
    cin >> taux_interet;
    
    if(montant_initial < montant_cible && taux_interet <= 0.){
        cout << "Le montant cible ne sera jamais atteint";
        return EXIT_SUCCESS;
    }

    montant = montant_initial;
    while(montant < montant_cible){
        ++annee;
        montant = montant * (1. + taux_interet / 100.);
    }

    cout << "Le montant cible est atteint apres " << annee << " an. " << endl;

    return 0;
}