#include <iostream>
#include <string>
using namespace std;

int main()
{
   int score_1 = 80;
   int score_2 = 92;
   int score_3 = 77;
   string fullName = "Bill Gate";
   double exam_ave;

   exam_ave = (score_1 + score_2 + score_3) / 3;

   cout << "Hello Mr/Mrs " << fullName << endl;
   cout << "You have received ";
   cout << score_1 << ", ";
   cout << score_2 << ", and ";
   cout << score_3 << " in " << endl;
   cout << "three exams. Your Average is " << exam_ave << ".\n";
   return 0;
}