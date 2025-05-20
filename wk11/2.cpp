#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void ReadData(int &a, int &b, int &c)
{
    cout << "Enter three int numbers: ";
    cin >> a >> b >> c;
}

void FindSumAve(int &a, int &b, int &c, int &sum, float &avg)
{
    sum = a + b + c;
    avg = sum / static_cast<float>(3);
}

void ShowSumAve(int &sum, float &avg)
{
    cout << "    Sum = " << sum << endl;
    cout << "    Average = " << fixed << setprecision(2) << avg << endl << endl;
}

void FindMaxMin(int &maximum, int &minimum, int &a, int &b, int &c)
{
    if (a > b && a > c)
    {
        maximum = a;
    }
    else if (b > a && b > c)
    {
        maximum = b;
    }
    else
    {
        maximum = c;
    }

    if (a < b && a < c)
    {
        minimum = a;
    }
    else if (b < a && b < c)
    {
        minimum = b;
    }
    else
    {
        minimum = c;
    }
}

void ShowMaxMin(int &maximum, int &minimum) 
{
    cout << "    Maximum = " << maximum << endl;
    cout << "    Minimum = " << minimum << endl;
}

int main()
{
    // declare identifiers
    int x, y, z, max, min;
    // read three integer numbers into x,y,z
    ReadData(x, y, z);
    // find and display the sum and average of x,y,z
    int Sum;
    float Average;
    FindSumAve(x, y, z, Sum, Average);
    ShowSumAve(Sum, Average);
    // find and display the max. and min. of x,y,z
    FindMaxMin(max, min, x, y, z);
    ShowMaxMin(max, min);
    // terminate program - I HAD TO MODIFY MAIN BECAUSE I USE LINUX
    system("read -p 'Press Enter to continue...' ");
    return 0;
}