
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

   int pgcd = mini;

   while(a % pgcd != 0 || b % pgcd != 0){
      pgcd--;
   }

   cout << "pgcd(" << a << "," << b << ") = " <<  pgcd << endl;


   return 0;
}