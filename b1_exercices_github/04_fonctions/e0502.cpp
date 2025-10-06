#include <iostream>
#include <cstdlib>

using namespace std;

int fibo(int n);

int main() {
    int n ;
    cin >> n;

    cout << "F(" << n << ") = " << fibo(n) << endl;

    return 0;
}
int fibo(int n){
    if(n == 0)return 0;
    if(n == 1 || n == 2)return 1;
    return fibo(n-1) + fibo(n-2);
}










