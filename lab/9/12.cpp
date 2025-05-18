#include <iostream>
using namespace std;

// Read size numbers from cin into a new array and return the array.
int* ReadNums(int size) {
   int *nums = new int[size];
   for (int i = 0; i < size; ++i) {
      cin >> nums[i];
   }
   return nums;
}

// Print the numbers in the array, separated by spaces
void PrintNums(int nums[], int size) {
   for (int i = 0; i < size; ++i) {
      cout << nums[i];
      if (i < size - 1) {
         cout << " ";
      }
   }
   cout << endl;
}

// Exchange nums[j] and nums[k].
void Swap(int nums[], int j, int k) {
   int temp = nums[j];
   nums[j] = nums[k];
   nums[k] = temp;
}

// Sort numbers
void InsertionSort(int numbers[], int size) {
   int i, j;
   int comparisons = 0;
   int swaps = 0;

   for (i = 1; i < size; ++i) {
      j = i;
      while (j > 0) {
         comparisons++;
         if (numbers[j] < numbers[j - 1]) {
            Swap(numbers, j, j - 1);
            swaps++;
            --j;
         } else {
            break;
         }
      }
      PrintNums(numbers, size);
   }
   
   cout << endl << "comparisons: " << comparisons << endl;
   cout << "swaps: " << swaps << endl;
}

int main() {
   // Step 1: Read numbers into an array
   int size;
   cin >> size;
   int* numbers = ReadNums(size);

   // Step 2: Output the numbers array
   PrintNums(numbers, size);
   cout << endl;

   // Step 3: Sort the numbers array
   InsertionSort(numbers, size);

   // Clean up
   delete[] numbers;
   
   return 0;
}