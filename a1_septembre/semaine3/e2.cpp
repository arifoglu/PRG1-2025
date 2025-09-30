#include <iostream>

using namespace std;

int main() {
    char c = 'A';
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 16; ++x, ++c)
            cout << c << ' ';
            cout << endl;
    }
    // same 
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 16; ++x)
            cout << c << ' ';
            ++c;// plus lisible
            cout << endl;
    }
    return 0;
}