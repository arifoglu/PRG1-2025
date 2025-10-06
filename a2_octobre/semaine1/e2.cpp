#include <iostream>
#include <cmath>

using namespace std;

double volume(double longeur, double largeur, double hauteur);


int main() {
   double longeur, largeur, hauteur;
   cin >> longeur >> largeur >> hauteur;

   cout << "volume : " << volume(longeur, largeur, hauteur) << endl;

   return 0;
}

double volume(double longeur, double largeur, double hauteur){
   double result = (1. / 3.) * (longeur * largeur) * hauteur;
   return result;
}

