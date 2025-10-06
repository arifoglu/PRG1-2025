#include <iostream>

using namespace std;

int main() {
    double som = 0.0;
    int n;
    cin >> n;
    
    for(int i = 1; i <= n ;++i){
        som += (1.0 / i);
    }
    cout << som << endl;

    return 0;
}