#include <iostream>
#include <cstdlib>

using namespace std;

void permutation(int& a, int& b, int& c){
    int t = a;
    a = b;
    b = c;
    c = t;
}


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i < 3;++i){
        permutation(a,b,c);
        cout << a << b << c << endl;
    }

    return 0;
}



