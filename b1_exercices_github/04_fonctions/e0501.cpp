#include <iostream>
#include <cstdlib>

using namespace std;

int facto(int n);

int main() {
    int n ;
    cin >> n;

    cout << n << "! = " << facto(n) << endl;

    return 0;
}
int facto(int n){
    if(n == 0 || n == 1)return 1;
    return n * facto(n -1);
}









