#include <iostream>
#include <cstdlib>

using namespace std;

bool op(double a, double b, char c);

int main() {
    double a, b;
    char c;
    cin >> a >> b >> c;

    op(a,b,c);

    return 0;
}

bool op(double a, double b, char c){
    double result;
    switch(c){
        case '+' : result = a + b ; break;
        case '-' : result = a - b ; break;
        case '*' : result = a * b ; break;
        case '/' : result = a / b ; break;
        default  : return false;
    }
    cout << a << " " << c << " " << b << " = " << result << endl;
    return true;
}




