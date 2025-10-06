#include <iostream>
#include <cstdlib>

using namespace std;

void f(string str_val, string& str_ref){
    str_val += '*';
    str_ref += '*';

    cout << "str_val " << str_val << ", str_ref = " << str_ref << endl;
}

int main() {
    string str_val = "hello";
    string str_ref = "world";

    f(str_val,str_ref);

    cout << "str_val = " << str_val << ", "  << "str_ref = " << str_ref << endl;

    return EXIT_SUCCESS;
}