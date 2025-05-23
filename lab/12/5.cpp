#include <string>
#include <iostream>

using namespace std;

   // Check the order of the input: return -1 for ascending,
   // 0 for neither, 1 for descending
template<typename theType> int CheckOrder(theType arg1, theType arg2, theType arg3, theType arg4) {
    if (arg1 >= arg2 && arg2 >= arg3 && arg3 >= arg4)
    {
        return 1;
    }
    else if (arg1 <= arg2 && arg2 <= arg3 && arg3 <= arg4)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main() {
   // Read in four strings
   string stringArg1, stringArg2, stringArg3, stringArg4;
   cin >> stringArg1;
   cin >> stringArg2;
   cin >> stringArg3;
   cin >> stringArg4;
   // Check order of four strings
   cout << "Order: " << CheckOrder(stringArg1, stringArg2, stringArg3, stringArg4) << endl;

   // Read in four doubles
   double doubleArg1, doubleArg2, doubleArg3, doubleArg4;
   cin >> doubleArg1;
   cin >> doubleArg2;
   cin >> doubleArg3;
   cin >> doubleArg4;
   // Check order of four doubles
   cout << "Order: " << CheckOrder(doubleArg1, doubleArg2, doubleArg3, doubleArg4) << endl;
   
   return 0;
}