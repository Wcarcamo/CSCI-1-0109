#include <iostream>
using namespace std;

int main()
{
   int numShirts, numPants, numSocks;
   double priceShirts = 33.15;
   double pricePants = 75.99;
   double priceSocks = 5.15;
   double bill;

   cout << "-------Target Store-----------" << endl;
   cout << "Shirts.................." << priceShirts << endl;
   cout << "Pants..................." << pricePants << endl;
   cout << "Socks...................." << priceSocks << endl;

   cout << "    Enter the number of shirts: ";
   cin >> numShirts;
   cout << "    Enter the number of  pants: ";
   cin >> numPants;
   cout << "    Enter the number of  socks: ";
   cin >> numSocks;

   bill = (numShirts * priceShirts) + (numPants * pricePants) + (numSocks * priceSocks);
   cout << "         Your total bill = $ " << bill << endl;
   
   return 0;
}