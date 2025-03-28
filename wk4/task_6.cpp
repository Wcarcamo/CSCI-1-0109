#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double fahrenheit, celsius;
   
   cout << "I can convert temperature from degrees Fahrenheit to degrees Celsius. Try me" << endl;
   cout << "   Enter a temperature in Fahrenheit: ";

   cin >> fahrenheit;

   celsius = (5 * (fahrenheit - 32)) / 9;

   cout << "   " << fahrenheit << " Fahrenheit is " << fixed << setprecision(2) << celsius << " Celsius" << endl;

   return 0;
}