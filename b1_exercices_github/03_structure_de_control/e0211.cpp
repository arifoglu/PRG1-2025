#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;
   do{
      cout << "Hauteur du triangle (h > 0) :";
      cin >> n;
   }while(n < 0 || n == 0);
   
   for(int i = 1; i <= n ;++i){
      
      for(int k = n; k > i;--k){
         cout << " ";
      }
      
      for(int j = 0; j < 2 * i - 1 ;++j){
         cout << "*";
      }
      cout << endl;
   }

   return 0;
}