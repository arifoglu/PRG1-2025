#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n ;

    do{
        cout << "donnez un nombre positif : ";
        cin >> n;
        if(n < 0) cout << "svp positif\n" ;
        if(n <= 0)continue;
        cout << "sa racine carre est " << sqrt(n) << endl;

    }while(n);

    return 0;
}