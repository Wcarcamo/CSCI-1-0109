#include <iostream>
#include <string>
using namespace std;

int main()
{
   string nameFirst, nameMiddle, nameLast;
   
   cout << "Give me your name, I will send you a birthday card" << endl;
   
   cout << "      What is your first name: ";
   cin >> nameFirst;
   cout << "      What is your middle initial: ";
   cin >> nameMiddle;
   cout << "      What is your last name: ";
   cin >> nameLast;

   cout << "   <<<<<<< Happy Birthday ";
   cout << nameFirst << " " << nameMiddle << ". " << nameLast;
   cout << ">>>>>>>" << endl;

   return 0;
}