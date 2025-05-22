#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void displayArray(int num[], int size) {
    for (size_t i = 0; i < size; ++i)
    {
        cout << " " << num[i];
    }
    cout << endl;
}

void findMaxMin(int num[], int size, int& maximum, int& minimum) {
    for (size_t i = 0; i < size; ++i)
    {
        if (i == 0)
        {
            maximum = num[i];
            minimum = num[i];
        }
        
        if (num[i] > maximum)
        {
            maximum = num[i];
        }
        if (num[i] < minimum)
        {
            minimum = num[i];
        }        
    }
}

float findAverage(int num[], int size) {
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum += num[i];
    }
    return static_cast<float>(sum) / size;
}

void displayMaxMinAve(int maximum, int minimum, float avg) {
    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum << endl;
    cout << "Average = " << fixed << setprecision(2) << avg << endl << endl;
}

int main()
{
    int a[7] = {9, 11, 15, 7, 20, 30, 26};
    int max, min;
    float average;

    cout << "This is the original array a" << endl;
    displayArray(a, 7);
    
    findMaxMin(a, 7, max, min);
    average = findAverage(a, 7);
    displayMaxMinAve(max, min, average);
    
    sort(a, a + 7);
    cout << "This is the sorted form of array a" << endl;
    displayArray(a, 7);

    system("read -p 'Press Enter to continue...' ");
    return 0;
}
