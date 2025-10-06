#include <iostream>
#include <cmath>

using namespace std;

bool bisextile(int annee);

int main() {
   int annee;
   cin >> annee;

   cout << (bisextile(annee) == 0 ? "false" : "true") << endl;
   
   return 0;
}
bool bisextile(int annee){
   return (annee % 400 == 0 || (annee % 4 == 0 && annee % 100 != 0));
}




