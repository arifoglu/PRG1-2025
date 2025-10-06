#include <iostream>
#include <cstdlib>

using namespace std;

int& min(int& a, int& b, int& c);

int main() {
    int a = 5;
    int b = 2;
    int c = 9;

    cout << min(a, b, c);
    min(a, b, c) = 1;
    int& d = min(a, b, c);

    return 0;
}
int& min(int& a, int& b, int& c){
    return a < b ? (a < c ? a : c) : (b < c ? b : c);
}








