#include <iostream>
#include <cstdlib>

using namespace std;

double volume(double longeur, double largeur, double hauteur);

int main() {
    double longeur, largeur, hauteur;
    cin >> longeur >> largeur >> hauteur;

    double p = volume(longeur, largeur,hauteur);
    cout << p << endl;
    
    return 0;
}

double volume(double longeur, double largeur, double hauteur){
    double result = (1. / 3. ) * ( longeur * largeur) * hauteur;
    return result;
}
