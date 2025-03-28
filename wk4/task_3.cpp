#include <iostream>
using namespace std;

int main()
{
   int score1, score2, score3, average;
   
   cout << "I can compute your midterm's average, try me" << endl;
   cout << "      Enter your scores in 3 exams: ";

   cin >> score1;
   cin >> score2;
   cin >> score3;

   average = (score1 + score2 + score3) / 3;

   cout << "         Your average is : " << average << endl;

   return 0;
}