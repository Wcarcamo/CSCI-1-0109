#include <iostream>
using namespace std;

int main()
{
   int numPennies, numNickels, numDimes, numQuarters;
   double total;

   cout << "Check your pockets and tell me:" << endl;

   cout << "    How many pennies you have? ";
   cin >> numPennies;
   cout << "    How many nickels you have? ";
   cin >> numNickels;
   cout << "    How many dimes you have? ";
   cin >> numDimes;
   cout << "    How many quarters you have? ";
   cin >> numQuarters;

   total = (numPennies * 0.01) + (numNickels * 0.05) + (numDimes * 0.10) + (numQuarters * 0.25);
   cout << "         You have a total of $ " << total << endl;
   
   return 0;
}