#include "StateID.h" 
#include <iostream>
#include <string>

using namespace std;

StateID::StateID(string *info) {
   idInfo = new string[5];
   for (int i = 0; i < 5; i++) {
     idInfo[i] = info[i];
   }
}

StateID::StateID(const StateID &id) {
   idInfo = new string[5];
   for (int i = 0; i < 5; i++) {
     idInfo[i] = id.idInfo[i];
   }
}

void StateID::PrintId() {
   cout << "Name: " << idInfo[0] << endl;
   cout << "State: " << idInfo[1] << endl;
   cout << "IDN: " << idInfo[2] << endl;
   cout << "DOB: " << idInfo[3] << endl;
   cout << "EXP: " << idInfo[4] << endl;
}

void StateID::SetName(string n) {
   idInfo[0] = n;
}

void StateID::SetState(string st) {
   idInfo[1] = st;
}

void StateID::SetIdn(string idn) {
   idInfo[2] = idn;
}

void StateID::SetDob(string dob) {
   idInfo[3] = dob;
}

void StateID::SetExp(string exp) {
   idInfo[4] = exp;
}

string *StateID::GetInfo() {
   return idInfo;
}