#include "StateID.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
   string info[] = {"John Doe", "Nebraska", "N01234567", "1/23/1980", "1/24/2023"};
   StateID id(info);
   StateID backup(id);
   
   id.SetState("Pennsylvania");
   id.SetIdn("87654321");
   id.SetExp("1/25/2028");
   
   cout << "Old ID:" << endl;
   
   backup.PrintId();
   
   cout << endl;
   cout << "New ID:" << endl;
   
   id.PrintId();
   
   return 0;
}