#include <iostream>

using namespace std;

void swap(int *x, int *y) {
   int tmp = *x;
   *x = *y;
   *y = tmp;
}

int main() {
   int x = 1, y = 2;
   
   swap(&x, &y);

   cout << x << " " << y << endl;

   return 0;
}