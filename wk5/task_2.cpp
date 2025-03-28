#include <iostream>
using namespace std;

int main() {
   char choice, gender;
   int age;
   
   cout << "-------Clubs Requirements-------" << endl;
   cout << "a. Sigma Club (Must be male and over 21)" << endl;
   cout << "b. Omega Club (Must be female and teenagers)" << endl;
   cout << "c. Kapa Club (Must be male or female and over 30)" << endl << endl;
   
   cout << "Which club do you want to be a member of (a/b/c): ";
   cin >> choice;
   cout << "   Enter your gender (M/F): ";
   cin >> gender;
   cout << "   Enter your age: ";
   cin >> age;

   switch (choice) {
      case 'a':
         if (gender == 'M' && age > 21) {
            cout << "      You qualify to be a member of Sigma Club!" << endl;
         }
         else {
            cout << "      Sorry! You are not qualified to be a member of Sigma Club!" << endl;
         }
         break;
      case 'b':
         if (gender == 'F' && age > 12 && age < 20) {
            cout << "      You qualify to be a member of Omega Club!" << endl;
         }
         else {
            cout << "      Sorry! You are not qualified to be a member of Omega Club!" << endl;
         }
         break;
      case 'c':
         if ((gender == 'M' || gender == 'F') &&  age > 30) {
            cout << "      You qualify to be a member of Kapa Club!" << endl;
         }
         else {
            cout << "      Sorry! You are not qualified to be a member of Kapa Club!" << endl;
         }
         break;
      default:
         cout << "      Please enter a valid option: a, b, or c" << endl;
         break;
   }
   
   return 0;
}