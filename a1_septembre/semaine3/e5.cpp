#include <iostream>
using namespace std;

int increment_i(int i){
    ++i;
    return i; 
}

int main() {
    int a = 10;

    cout << "avant a : "  << a << endl;
    
    increment_i(1);
    
    cout << "après a : "  << a << endl;
    
    return 0;
}

