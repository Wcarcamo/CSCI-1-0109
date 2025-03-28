#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double priceDrinks, priceChips, priceNuts, bill;
   int numDrinks, numChips, numNuts;
   priceDrinks = 1.25;
   priceChips = 1.09;
   priceNuts = 1.18;

   cout << setw(15) << setfill('-') << "MENU" << setw(10) << setfill('-') << "" << endl;
   cout << "Drinks" << setw(15) << setfill('.') << "" << priceDrinks << endl;
   cout << "Chips" << setw(16) << setfill('.') << "" << priceChips << endl;
   cout << "Nuts" << setw(17) << setfill('.') << "" << priceNuts << endl;

   cout << "   How many drinks? ";
   cin >> numDrinks;
   cout << "   How many chips? ";
   cin >> numChips;
   cout << "   How many nuts? ";
   cin >> numNuts;

   bill += numDrinks * priceDrinks;
   bill += numChips * priceChips;
   bill += numNuts * priceNuts;

   cout << "      Total bill = " << bill << endl; 

   return 0;
}