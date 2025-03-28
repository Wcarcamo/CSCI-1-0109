#include <iostream>
#include <string>
using namespace std;

int main()
{
   string myFullName, myAddress, MyPhoneNumber;
   
   myFullName = "William Carcamo";
   myAddress = "123 Main St";
   MyPhoneNumber = "(123)456-7890";

   cout << "My personal information:" << endl;
   cout << "      My full name..................." << myFullName << endl;
   cout << "      My address....................." << myAddress << endl;
   cout << "      My phone number................" << MyPhoneNumber << endl;
   
   return 0;
}