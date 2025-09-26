#include <iostream>

using namespace std;

int main() {
   cout << "Livraison en Suisse ? (O/N) ";
   char reponse1; cin >> reponse1;
   
   // votre code vient ici
   const double tarif_suisse = 5.0;
   const double tarif_suisse_exception = 7.0;
   const double tarif_liechtenstein = 7.0;
   const double tarif_monde = 10.0;

   if(reponse1 == 'O')
   {
        cout << "Livraison Grison ou Tessin ? (O/N) ";
        char reponse2; cin >> reponse2;
        if(reponse2 == 'O')
        {
            cout << tarif_suisse_exception << endl;
        }
        else
        {
            cout << tarif_suisse << endl ;
        }
   }
   else if(reponse1 == 'N')
   {
        cout << "Livraison au Liechtenstein ? (O/N) ";
        char reponse3; cin >> reponse3;
        if(reponse3 == 'O')
        {
            cout << tarif_liechtenstein << endl;
        }
        else
        {
            cout << tarif_monde << endl;
        }
   }
   

   return 0;
}