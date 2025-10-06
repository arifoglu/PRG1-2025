#include <iostream>
#include <cstdlib>

using namespace std;

void affiche(char debut, char fin);

int main() {
    char a, b;
    cin >> a >> b;

    affiche(a,b);

    return 0;
}

void affiche(char debut, char fin){
    if(debut <= fin){
        for(int i = debut; i <= fin;++i){
            cout << char(i);
         }
    }
    cout << endl;
}

