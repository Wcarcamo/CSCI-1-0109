#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> b) {
   int size = b.size();

   for (int i = 0; i < size; ++i) {
      cout << b.at(i) << " ";
   }
   cout << endl;
}

void printArrayGraph(vector<int> b) {
   int size = b.size();
   int tmp;

   for (int i = 0; i < size; ++i) {
      cout << "  " << b.at(i) << ":";
      for (int j = 0; j < b.at(i); ++j) {
         cout << "*";
      }
      cout << endl;
   }
}

int main() {
   const int A_SIZE = 5;
   vector<int> a(A_SIZE);
   int tmp, sum, max, min;

   cout << "Enter 5 numbers: ";
   for (int i = 0; i < A_SIZE; i++) {
      cin >> tmp;
      a.at(i) = tmp;

      if (i == 0) {
         max = min = sum = tmp;
      } 
      else {
         sum += tmp;
      }

      if (tmp > max) {
         max = tmp;
      }

      if (tmp < min) {
         min = tmp;
      }
   }
   
   cout << "  This is the content of array a: ";
   printArray(a);
   cout << "  The od data in array is " << sum << endl;
   cout << "  The maximum and minimum data are " << max << " " << min << endl;
   cout << endl;
   cout << "This is the bar graph of array a" << endl;
   printArrayGraph(a);
   
   return 0;
}