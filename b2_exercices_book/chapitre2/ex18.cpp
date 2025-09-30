#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double som = 0.0;
    cin >> n;

   for(int i = 1; i <= n;++i){
        som += (1.0 / i);
   }
    cout << som << endl;

    return 0;
}