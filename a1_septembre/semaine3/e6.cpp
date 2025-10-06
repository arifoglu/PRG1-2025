#include <iostream>
using namespace std;

void puissance(int base, int exponant, int& result);

int main() {
    int a, b, result = 0;

    cin >> a >> b;

    puissance(a,b,result);

    cout << result << endl;
    
    return 0;
}

void puissance(int base, int exponant , int& result){
    for(int i = 1; i <= exponant;++i){
        result = result * base;
    }

}