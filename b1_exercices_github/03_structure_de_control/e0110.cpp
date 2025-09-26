#include <iostream>

using namespace std;

int main() {
   double note = 0.0;
   char note_ECTS;
   cout << "Entrez la note UNIGE : " ;
   cin >> note;

   if(note < 0. || note > 6.)
   {
      cout << "error";
   }
   else
   {
      if(note < 4.)
      {
         note_ECTS = 'F';
      }
      else if(note < 4.25)
      {
         note_ECTS = 'E';
      }
      else if(note < 4.50)
      {
         note_ECTS = 'D';
      }
      else if(note < 4.75)
      {
         note_ECTS = 'C';
      }
      else if(note < 5.25)
      {
         note_ECTS = 'B';
      }
      else
      {
         note_ECTS = 'A';
      }
   }


   cout << "La note ECTS est : " << note_ECTS << endl;

   return 0;
}