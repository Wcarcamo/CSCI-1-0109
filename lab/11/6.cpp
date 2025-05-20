#include <string>
#include <iostream>

using namespace std;

int main() {
   string inputName;
   int age;
   // Set exception mask for cin stream
   cin.exceptions(ios::failbit);

   cin >> inputName;
   while(inputName != "-1") {
      try {
         cin >> age;
         cout << inputName << " " << (age + 1) << endl;
      }
      catch (ios_base::failure& e) {
         cin.clear();
         string garbage;
         getline(cin, garbage);

         cout << inputName << " 0" << endl;
      }
      cin >> inputName;
   }
   
   return 0;
}