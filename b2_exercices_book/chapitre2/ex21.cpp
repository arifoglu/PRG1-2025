#include <iostream>

using namespace std;

int main() {
    int n ; 
    cin >> n;
    
    int n1 = 1, n2 = 1, n3;
    
    for(int i = 3; i <= n;++i){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    cout << n << "ieme valeur : " << n3 << endl;

    return 0;
}