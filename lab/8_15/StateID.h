#ifndef STATEIDH
#define STATEIDH

#include <string>

using namespace std;

class StateID {
private:
   string *idInfo;

public:
   StateID(string *info);
   StateID(const StateID &id);
   void PrintId();
   void SetName(string n);
   void SetState(string st);
   void SetIdn(string idn);
   void SetDob(string dob);
   void SetExp(string exp);
   string* GetInfo();
};

#endif