#include <iostream>
using namespace std;

int main()
{
   int num1, num2, total, average;
   
   cout << "Enter two integer numbers: ";
   cin >> num1;
   cin >> num2;

   total = num1 + num2;
   average = total / 2;

   cout << "      ";
   cout << num1 << " + " << num2 << " = " << total << endl;
   
   cout << "      ";
   cout << "the total of " << num1 << " and " << num2 << " is " << total << endl;
   
   cout << "      ";
   cout << "and their average is " << average << endl;

   return 0;
}