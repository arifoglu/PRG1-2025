#include <iostream>
#include <cstdlib>

using namespace std;

bool bissextile(int annee);

int main() {
    int n;
    cin >> n;
    cout << ( bissextile(n) ?  "true " : " false" ) << endl;
    return 0;
}
bool bissextile(int annee){
    return (annee % 400 == 0 || (annee % 4 == 0 && annee % 100 != 0));
}

