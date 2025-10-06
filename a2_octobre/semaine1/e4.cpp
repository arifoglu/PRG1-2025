#include <iostream>
#include <cmath>

using namespace std;

void listercaracter(char debut, char fin);

int main() {
   listercaracter('A','A');
   cout << endl;

   listercaracter('A','C');
   cout << endl;
   
   listercaracter('C','B');
   cout << endl;

   listercaracter(65,67);
   cout << endl;   
   
   listercaracter('0','9');
   cout << endl;
   return 0;
}
void listercaracter(char debut, char fin){
   if(debut <= fin){
         for(char c = debut; c <= fin;++c){
         cout << c;
      }
   }
   
}




