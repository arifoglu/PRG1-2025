#include <iostream>

using namespace std;

int main() {
    int i = 0, n, som;
    som = 0;

    i = 0;
    while(i < 4){
        cout << "donnez un entier : " ;
        cin >> n;
        som += n;
        ++i; 
    }
    cout << "som " << som << endl;

    return 0;
}