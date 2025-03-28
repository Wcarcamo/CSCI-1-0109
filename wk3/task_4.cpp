#include <iostream>
#include <string>
using namespace std;

int main()
{
   string nameFirst, nameLast;
   int age;
   
   cout << "What is your first name? ";
   cin >> nameFirst;
   cout << "What is your last name? ";
   cin >> nameLast;
   cout << "How old are you " << nameFirst << " " << nameLast << "? ";
   cin >> age;
   
   cout << "   Hello " << nameFirst << " " << nameLast << endl;
   cout << "   At age " << age << " you are the governor of California." << endl;
   cout << "   Good luck!" << endl;
   cout << "   Students in CS-120" << endl;
   
   return 0;
}