#include <iostream>
using namespace std;

int main()
{
   double rectWidth = 12.34;
   double rectLength = 33.05;
   double rectArea, rectPerimeter;

   rectArea = rectWidth * rectLength;
   rectPerimeter = 2 * (rectWidth + rectLength);

   cout << "-------------------" << endl;
   cout << "|                 |" << endl;
   cout << "|                 | Width = " << rectWidth << endl;
   cout << "|                 |" << endl;
   cout << "-------------------" << endl;
   cout << "   Length = " << rectLength << endl;
   cout << "      Area = " << rectArea << endl;
   cout << "      Perimeter = " << rectPerimeter << endl;

   return 0;
}