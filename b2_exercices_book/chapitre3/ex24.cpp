#include <iostream>
using namespace std ;

int fct(int r);

int main(){  
    int n, p=5 ;  
    n = fct (p) ; 

    cout << "p = " << p << " n = " << n ;
    
}

int fct (int r){ 
    return 2*r ;
}