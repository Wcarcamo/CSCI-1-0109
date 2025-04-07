#ifndef HUMANH
#define HUMANH

#include <iostream>
#include <string>

using namespace std;

class Human {
   public:
      void Eat() {
         cout << "Human is eating." << endl;
      }
      void Sleep() {
         cout << "Human is eating." << endl;
      }
      void Walk() {
         cout << "Human is walking." << endl;
      }
      void Talk() {
         cout << "Human is talking." << endl;
      }

      Human();
      Human(string first_name, string last_name, string date_of_birth, int age, int social_security, int income);
      void SetAge(int age);
      void SetName(string first, string last);
      void SetFirstName(string name_first);
      void SetLastName(string name_last);
      void SetDateOfBirth(string dob);
      void SetSocialSecurity(int social_security);
      void SetIncome(int income);

      int GetAge();
      string GetFirstName();
      string getLastName();
      string GetDateOfBirth();

      void Print();

   private:
      string name_first, name_last, date_birth;
      int age, social_security, income;
};

#endif