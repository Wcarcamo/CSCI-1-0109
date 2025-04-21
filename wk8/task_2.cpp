#include <iostream>

using namespace std;

int main() {
   int* num;
   num = new int[100];
   int max, min, sum;
   max = min = sum = 0;
   double avg;

   for (int i = 0; i < 100; i++)
   {
      *(num +i) = i;
      sum += *(num + i);
      
      if (i > max)
      {
         max = *(num + i);
      }
      
      if (i < min)
      {
         min = *(num + i);
      }
   }
   
   avg = sum / 100.0;
   
   cout << "Maximum: " << max << endl;
   cout << "Minimum: " << min << endl;
   cout << "Average: " << avg << endl;
   
   delete[] num;

   return 0;
}