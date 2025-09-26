#include <iostream>
using namespace std;

int main() {
   cout << "Entrez un no de mois (1-12) : ";
   int no_mois; cin >> no_mois;
   
   cout << "Ce mois comporte ";
   
   // votre code vient ici
   // 1,3,5,7,8,10,12 => 31 
   // 4,6,9,11 => 30
   switch(no_mois){
        case 2: cout << "28 ou 29 "; break;
        case 4:
        case 6:
        case 9:
        case 11: cout << " 30 " ; break;
        default : cout << "31" ; break;
   }
   cout << " jours." << endl;

   // option2
   if(no_mois == 2 || no_mois == 4 || no_mois == 6 || no_mois == 9 || no_mois == 11)
   {
    cout << " 30 " << endl;
   }
   else if(no_mois == 1 || no_mois == 3 || no_mois == 5 || no_mois == 7 || no_mois == 8 || no_mois == 10 || no_mois == 12 )
   {
    cout << "31 " << endl;
   }
   else
   {
    cout << "28 ou 29" << endl;
   }
   
   // option 3
   cout << (no_mois == 2 ? "28 ou 29" : (no_mois == 2 || no_mois == 4 || no_mois == 6 ||no_mois == 9 ||no_mois == 11 ? "30" : "31") ) << endl;
   return 0;
}