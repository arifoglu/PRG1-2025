#include <iostream>
using namespace std ;

static int k;

void f1();
void f2(int n);
void f3(int k);

int main(){  
    f1();
    cout << endl;
    f2(3);
    cout << endl;
    f3(3);
    cout << endl;

    
}
void f1(){
    cout << "Bonjour(f1)";
}

void f2(int n){
    for(int i = 0; i < n;++i){
        cout << "Bonjour(f2)\n"; 
    }
}

void f3(int k){
    for(int i = 0; i < k;++i){
        cout << "Bonjour " << i + 1 << endl; 
    }
}
