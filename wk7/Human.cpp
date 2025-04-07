#include "Human.h"
#include <iostream>

using namespace std;

Human::Human() {
    age = 0;
    name_first = "UnknownFirst";
    name_last = "UnknownLast";
    date_birth = "01/01/1900";
    social_security = 999999999;
    income = 0;
}
Human::Human(string first_name, string last_name, string date_of_birth, int age, int social_security, int income){
    this->name_first = first_name;
    this->name_last = last_name;
    this->date_birth = date_of_birth;
    this->age = age;
    this->social_security = social_security;
    this->income = income;
}

void Human::SetAge(int age) {
    this->age = age;
}
void Human::SetName(string first, string last) {
   SetFirstName(first);
   SetLastName(last);
}
void Human::SetFirstName(string name_first) {
    this->name_first = name_first;
}
void Human::SetLastName(string name_last) {
    this->name_last = name_last;
}
void Human::SetDateOfBirth(string dob) {
    this->date_birth = dob;
}
void Human::SetSocialSecurity(int social_security) {
    this->social_security = social_security;
}
void Human::SetIncome(int income) {
    this->income = income;
}

int Human::GetAge() {
    return age;
}
string Human::GetFirstName() {
    return name_first;
}
string Human::getLastName() {
    return name_last;
}
string Human::GetDateOfBirth() {
    return date_birth;
}

void Human::Print() {
    cout << "Name: " << name_first << " " << name_last << endl;
    cout << "Age: " << age << ", Date of Birth:" << date_birth << endl;
}