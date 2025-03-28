#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name, gradeMath, gradeComputer, gradeBiology;

   cout << "Enter your name: ";
   cin >> name;
   cout << "Enter your grade in Math course: ";
   cin >> gradeMath;
   cout << "Enter your grade in Computer course: ";
   cin >> gradeComputer;
   cout << "Enter your grade in Biology course: ";
   cin >> gradeBiology;

   cout << "   " << name << ", this is your grade report:" << endl;
   cout << "      Course           Grade" << endl;
   cout << "      ----------------------" << endl;
   cout << "      Mathematics........." << gradeMath << endl;
   cout << "      Computer............" << gradeComputer << endl;
   cout << "      Biology............." << gradeBiology << endl;

   return 0;
}