#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double priceSoda, priceWater, price10inch, price12inch, bill;
   int numDrinks, numSandwiches, sandwhich;
   char drink;
   priceSoda = 1.35;
   priceWater = 1.10;
   price10inch = 3.45;
   price12inch = 3.85;

   cout << setw(15) << setfill('-') << "7-11" << setw(10) << setfill('-') << "" << endl;
   cout << "Drinks" << endl;
   cout << "   Soda(S)" << setw(13) << setfill('.') << "" << priceSoda << endl;
   cout << "   Water(W)" << setw(12) << setfill('.') << "" << fixed << setprecision(2) << priceWater << endl;
   cout << "Sandwhiches" << endl;
   cout << "   10 inches" << setw(11) << setfill('.') << "" << price10inch << endl;
   cout << "   12 inches" << setw(11) << setfill('.') << "" << price12inch << endl;

   cout << "   How many drinks? ";
   cin >> numDrinks;
   cout << "      What kind of drink(S = Soda, W = Water)? ";   
   cin >> drink;
   cout << "   How many Sandwiches? ";
   cin >> numSandwiches;
   cout << "      What size of sandwich (10/12 inches)? ";
   cin >> sandwhich;

   if (drink == 'S'){
      bill += numDrinks * priceSoda;
   }
   else {
      bill += numDrinks * priceWater;
   }
   
   if (sandwhich == 10){
      bill += numSandwiches * price10inch;
   }
   else {
      bill += numSandwiches * price12inch;
   }

   if ((drink == 'S' || drink == 'W') && (sandwhich == 10 || sandwhich == 12)) {
      cout << "   Your total bill = " << bill << endl; 
   }
   else {
      cout << "   Sorry you've asked for something not available on the menu." << endl;
   }

   return 0;
}