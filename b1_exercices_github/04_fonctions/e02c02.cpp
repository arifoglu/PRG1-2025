#include <iostream>
#include <cstdlib>

using namespace std;

void permutation(double* a,double* b, double* c){
    double t = *a;
    *a = *b;
    *b = *c;
    *c = t;
}


int main() {
    double a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i < 3;++i){
        permutation(&a, &b, &c);
        cout << a << b << c << endl;
    }

    return 0;
}








