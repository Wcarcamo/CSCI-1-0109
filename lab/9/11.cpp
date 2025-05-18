#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int recursions = 0;
int comparisons = 0;

vector<int> ReadIntegers() {
   int size;
   cin >> size;
   vector<int> integers(size);
   for (int i = 0; i < size; ++i) {
      cin >> integers.at(i);
   }
   sort(integers.begin(), integers.end());
   return integers;
}

int BinarySearch(int target, vector<int> integers, int lower, int upper) {
    recursions++;
    int mid = (upper + lower) / 2;
    
    if (upper > lower)
    {
        comparisons++;
        if (integers.at(mid) == target) {
            return mid;
        }
        comparisons++;
        if (integers.at(mid) < target) {
            return BinarySearch(target, integers, mid + 1, upper);
        }
        else if (integers.at(mid) > target){
            return BinarySearch(target, integers, lower, mid - 1);
        }
    }

    if (upper == lower)
    {
        comparisons++;
        if (integers.at(mid) == target) {
            return mid;
        }
    }

    return -1;
}

int main() {
   int target;
   int index;

   vector<int> integers = ReadIntegers();
   cin >> target;

   index = BinarySearch(target, integers, 0, integers.size() - 1);
   printf("index: %d, recursions: %d, comparisons: %d\n",
          index, recursions, comparisons);

   return 0;
}