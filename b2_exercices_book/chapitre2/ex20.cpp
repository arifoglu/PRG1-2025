#include <iostream>

using namespace std;

int main() {
    int nbf, n10, n5, n2;
    nbf = 0;

    for(n10 = 0; n10 <= 10; n10++){
        for(n5 = 0; n5 <= 20;n5++){
            for(n2 = 0; n2 <= 50;n2++){
                if(2 * n2 + 5 * n5 + 10 * n10 == 100){
                    nbf++;
                    cout << "1 euro ";
                    if(n2) cout << n2  << "x 2c";
                    if(n5) cout << n5  << "x 5c";
                    if(n10)cout << n10 << "x 10c";
                }
            }
        }
    }


    return 0;
}