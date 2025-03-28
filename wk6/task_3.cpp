#include <iostream>
#include <string>
using namespace std;

int main() {
   string Future[5] = {
      "Study more", 
      "Go to movie", 
      "Stay home", 
      "Call friend", 
      "Go to Los Vegas"
   };
   char again = 'y';
   int option;

   while (again == 'y') {
      option = rand() % 5;
      cout << Future[option] << endl << "  Continue(y/n)? ";
      
      cin >> again;
      if (again != 'y' && again != 'n') {
         cout << "Invalid option, the program will continue" << endl;
         again = 'y';
      }
   }
   
   cout << "Goodbye!" << endl;

   return 0;
}