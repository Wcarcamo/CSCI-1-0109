#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int score;
 
   cout << "Enter your score: ";
   cin >> score;
   
   if(score > 100 || score < 0) {
      cout << "Invalid Score: Score should be between 0 - 100, inclusive" << endl;
   }
   else if (score > 89) {
      cout << "Your grade is a \"A\"" << endl;
   }
   else if (score > 79) {
      cout << "Your grade is a \"B\"" << endl;
   }
   else if (score > 69) {
      cout << "Your grade is a \"C\"" << endl;
   }
   else if (score > 59) {
      cout << "Your grade is a \"D\"" << endl;
   }
   else {
      cout << "Your grade is a \"F\"" << endl;
   }

   cout << "0----------60-------70-------80-------90-------100" << endl;
   cout << "      F         D        C        B        A" << endl;

   return 0;
}