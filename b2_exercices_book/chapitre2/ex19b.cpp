#include <iostream>

using namespace std;

int main() {
    int n ;
    cout << "Combien de lignes ? (svp le numero impair) ";
    cin >> n;

    int mid = n / 2;

    for(int i = 0; i <= mid;++i){
        for(int k = 0; k < mid - i;++k){
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1;++j){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = mid - 1; i >= 0;--i){
        for(int k = 0; k < mid - i;++k){
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1;++j){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}