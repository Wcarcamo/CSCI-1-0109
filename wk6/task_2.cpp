#include <iostream>
using namespace std;

int main() {
   int a[10];

   // assign 10 random integers between 1 and 100 to array a 
   for (int i = 0; i < 10; i++) {
      a[i] = rand() % 100 + 1;
   }
   
   //Display array a 
   for (int i : a) {
      cout << i << " ";
   }
   cout << endl;
   
   //Find the maximum  and minimum numbers  in array a 
   int max, min; 
   max = min = a[0];
   for (int i : a) {
      if (i > max) {
         max = i;
      }
      if (i < min) {
         min = i;
      }
   }
   
   // Show the max and min values. 
   cout << "Max: " << max << ", Min: " << min << endl;

   // find the average of numbers in array a 
   float Average; int Total = 0;
   for (int i : a) {
      Total += i;
   } 
   Average = Total / 10.0;

   // display numbers in array a whose value is above average 
   for (int i : a) {
      if (i > Average) {
         cout << i << " ";
      }
   }
   cout << endl;

   //terminate program
   return 0;
}