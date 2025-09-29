
#include <iostream>

using namespace std;

int main() {
   int a, b;

   do{
      cout << "Donnez 2 nombres entiers positifs : ";
      cin >> a >> b;
   }while(a <= 0 || b <= 0);

   int mini = (a < b) ? a : b;
   int maxi = (a > b) ? a : b;

   int ppmc = maxi;

   while(ppmc % mini != 0){
      ppmc += maxi;
   }

   cout << "ppmc(" << a << "," << b << ") = " <<  ppmc << endl;


   return 0;
}