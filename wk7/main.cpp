#include "Human.h"
#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
   Human student;
   Human professor;
   
   student.Eat();
   student.Sleep();
   student.Walk();
   student.Talk();

   student.SetAge(25);
   student.SetName("Janice", "Wind");
   student.SetDateOfBirth("01/21/2000");
   student.SetSocialSecurity(123456789);
   student.SetIncome(30000);

   student.GetAge();
   student.GetFirstName();
   student.getLastName();
   student.GetDateOfBirth();

   student.Print();
   professor.Print();

   return 0;
}