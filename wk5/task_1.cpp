#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
   vector<int> exams;
   int choice, exam, sum = 0;
   double average;
   
   cout << "-------Student's Evaluation Center-------" << endl;
   cout << "1. Compute 2 Math exams average" << endl;
   cout << "2. Compute 3 Computer Sc. exams average" << endl;
   cout << "3. Compute 4 Physics exams average" << endl << endl;
   
   cout << "Please enter your choice: ";
   cin >> choice;

   if (choice == 1 || choice == 2 || choice == 3 ) {
      switch (choice) {
         case 1:
            cout << "      Enter your 2 math exam scores: ";
            break;
         case 2:
            cout << "      Enter your 3 computer science exam scores: ";
            break;
         case 3:
            cout << "      Enter your 4 physics exam scores: ";
            break;
      }

      for (int i = 0; i < (choice + 1); i++) {
         cin >> exam;
         exams.push_back(exam);
         sum += exam;
      }
      average = sum / (choice + 1.00);
      cout << "      Your average is " << fixed << setprecision(2) << average << endl;
   }
   else {
      cout << "Valid options: 1, 2, or 3" << endl;
   }
   
   return 0;
}