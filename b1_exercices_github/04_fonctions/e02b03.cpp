#include <iostream>
#include <cstdlib>

using namespace std;

void retrait(double& solde_courant, double& montant_retrait);

int main() {
    double solde_courant, montant_retrait;
    do{
        cin >> solde_courant >> montant_retrait;
    }while(solde_courant < 0 || montant_retrait < 0);
    
    retrait(solde_courant,montant_retrait);
    
    return 0;
}

void retrait(double& solde_courant, double& montant_retrait){
    if(solde_courant < montant_retrait){
        cout << "Tu peux retraiter seulement : " << solde_courant << endl;
        solde_courant = 0;
    }else {
        cout << "Tu peux retraiter           : " << montant_retrait << endl;
        solde_courant -= montant_retrait;
    }
    
    cout << "apres le retrait solde courant du compte : " << solde_courant << endl;

}









