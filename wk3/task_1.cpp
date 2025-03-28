#include <iostream>
using namespace std;

int main()
{
   int score1, score2, score3;
   double average;

   cout << "Enter your scores in three exams: ";

   cin >> score1 >> score2 >> score3;
   
   average = (score1 + score2 + score3) / 3.0;

   cout << "    Your average is " << average << endl;

   return 0;
}