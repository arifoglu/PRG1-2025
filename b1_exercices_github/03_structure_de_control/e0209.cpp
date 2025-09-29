#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    const double g = 9.81;
    double coeff, h0, hauteur, v0 , v1;
    int nb_rebonds;

    do{
        cout << "Coefficient de rebond (0 <= coeff < 1) : ";
        cin >> coeff;
    }while(coeff >= 1 || coeff < 0);
    
    do{
        cout << "Hauteur initiale[m]   (h0 >= 0)        : ";
        cin >> h0;
    }while(h0 < 0);

    do{
        cout << "Nombre de rebonds      (n >= 0)        : ";
        cin >> nb_rebonds;
    }while(nb_rebonds < 0);

    
    for(int i = 0; i < nb_rebonds ;++i){
        v0 = sqrt(2 * g * h0);
        v1 = coeff * v0;
        hauteur = (v1 * v1) / (2 * g); 
        h0 = hauteur;
    }

    cout << "La hauteur atteinte apres "<< nb_rebonds << " rebonds : " << hauteur << "[m]" << endl;

    return 0;
}