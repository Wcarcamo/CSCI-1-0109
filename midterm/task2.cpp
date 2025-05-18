#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   double priceH, priceC, priceF, priceSoda, bill;
   int numSandwiches, numDrinks;
   char typeSandwich;
   string name;

   priceH = 1.10;
   priceC = 1.75;
   priceF = 2.20;
   priceSoda = 1.00;

   cout << setw(17) << setfill('-') << "MENU" << setw(14) << setfill('-') << "" << endl;
   cout << fixed << setprecision(2);
   cout << "Sandwhiches" << endl;
   cout << "  Hamburger (H)" << setw(12) << setfill('.') << "" << priceH << endl;
   cout << "  Chickenburger (C)" << setw(8) << setfill('.') << "" << priceC << endl;
   cout << "  Fishburger (F)" << setw(11) << setfill('.') << "" << priceF << endl;
   cout << "Drinks" << endl;
   cout << "  Soda" << setw(21) << setfill('.') << "" << priceSoda << endl << endl;

   cout << "What is your name? ";
   cin >> name;

   cout << name << ", please answer the following:" << endl;
   cout << "  How many sandwiches? ";
   cin >> numSandwiches;
   cout << "   What kind of sandwhich (H/C/F)? ";
   cin >> typeSandwich;
   cout << "   How many drinks? ";
   cin >> numDrinks;

   switch (typeSandwich)
   {
        case 'H':
            bill += numSandwiches * priceH;
            break;
        case 'C':
            bill += numSandwiches * priceC;
            break;
        case 'F':
            bill += numSandwiches * priceF;
            break;
        default:
            typeSandwich = 'X';
            break;
   }

   bill += numDrinks * priceSoda;

   if (typeSandwich == 'X')
   {
    cout << "    Invalid sandwhich. Enter either H, C, or F" << endl;
   }
   else {
       cout << "    Total bill = " << fixed << setprecision(2) << bill << endl;
   }

   return 0;
}