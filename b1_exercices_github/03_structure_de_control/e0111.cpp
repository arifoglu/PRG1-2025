#include <iostream>
#include <cmath>
using namespace std;

int main() {
   cout << "Donnez les valeurs de a, b, et c de l'equation a*x^2+b*x+c : ";
   double a, b, c;
   cin >> a >> b >> c;
   
   // votre code vient ici.
   // ∆ = √b^2 - 4ac
   // x1,2 = ( -b ± √∆ ) / 2

   double delta = (b * b) - (4 * a * c);
   double delta_racine = sqrt(delta);
   
   if(delta >= 0 )
   {
      double x1 = (-b + delta_racine) / (2 * a);
      double x2 = (-b - delta_racine) / (2 * a);
   }
   else if(delta < 0)
   {
      cout << "non reel solution" << endl;
   }

   return 0;
}