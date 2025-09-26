#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;
   do{
      cout << "Hauteur du triangle (h > 0) :";
      cin >> n;
   }while(n < 0 || n == 0);
   
   for(int i = 1 ; i <= n;++i){
      for(int j = n ; j > i;--j){
         cout << "*" ;
      }
      for(int k = 0; k < i;++k){
         cout << " ";
      }
      cout << endl;
   }

   return 0;
}