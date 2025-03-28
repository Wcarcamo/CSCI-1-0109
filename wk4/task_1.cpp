#include <iostream>
using namespace std;

int main()
{
   double width, length, area, perimeter;
   
   cout << "For the following rectangle:" << endl;
   cout << "        -------------------" << endl;
   cout << "        |                 |" << endl;
   cout << "        |                 | Width" << endl;
   cout << "        |                 |" << endl;
   cout << "        -------------------" << endl;
   cout << "               length      " << endl;
   
   cout << "Enter the measure of width: ";
   cin >> width;
   cout << "Enter the measure of length: ";
   cin >> length;

   area = width * length;
   perimeter = 2 * (width + length);

   cout << "      Area = " << area << endl;
   cout << "      Perimeter = " << perimeter << endl;

   return 0;
}