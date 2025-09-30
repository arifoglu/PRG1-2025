#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int j = 1;

    int z = (++i, ++j); // 1,2 => z => 2
    int k = (4,5);      // k => 5

    cout << "i "<< i << endl;
    cout << "j "<< j << endl;
    cout << "z "<< z << endl;
    cout << "k "<< k << endl;
    

    return 0;
}