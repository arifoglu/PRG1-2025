#include <iostream>
#include <cstdlib>

using namespace std;

static int i;

void f(){
    cout << "appel numero " << ++i << endl;
};

int main() {
    f();
    f();
    f();
    
    return 0;
}










