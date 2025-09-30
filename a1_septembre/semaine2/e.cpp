/*
Une société suisse tarife ses frais de livraison comme suit :

5.00 CHF si livraison en Suisse, à l'exception des cantons des Grisons et du Tessin où les frais de livraison se monte à 7.00 CHF
7.00 CHF si livraison au Liechtenstein.
10.00 CHF partout ailleurs dans le monde
Complétez le programme qui suit pour qu'il détermine et affiche le tarif de livraison. Il ne peut poser que des questions auxquelles l'utilisateur répond que par "O" (oui) ou "N" (non)
*/

#include <iostream>

using namespace std;

int main() {
   cout << "Livraison en Suisse ? (O/N) ";
   char reponse1; cin >> reponse1;
   // votre code vient ici
    if(reponse1 == 'O')
    {
        char reponse2;
        
        cout << "Livraison Grisons ou Tessin ?" << endl;
        cin >> reponse2;

        if(reponse2 == 'O')
        {
            cout << "Livraison : 7.00 CHF" << endl;
        }
        else
        {
            cout << "Livraison : 5.00 CHF" << endl;
        }
    }
    else
    {
        char reponse3;
        
        cout << "Livraison Liechtenstein ?" << endl;
        cin >> reponse3;
        
        if(reponse3 == 'O')
        {
            cout << "Livraison : 7.00 CHF" << endl;
        }
        else
        {
            cout << "Livraison : 10.00 CHF" << endl;
        }
    }

    return 0;
}