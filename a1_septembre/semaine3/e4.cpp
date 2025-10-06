#include <iostream>
using namespace std;

int puissance(int base, int exponant);

int main() {
    int a, b;

    cin >> a >> b;

    cout << puissance(a,b) << endl;
    
    return 0;
}

int puissance(int base, int exponant){
    int result = 1 ;

    for(int i = 1; i <= exponant;++i){
        result = result * base;
    }

    return result;
}