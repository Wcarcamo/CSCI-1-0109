#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void Read(int& a, int& b, int& c) {
    cout << "Enter three int numbers: ";
    cin >> a >> b >> c;
}

int CompSum(int& a, int& b, int& c) {
    return a + b + c;
}

void CompAve(int& a, int& b, int& c, float& avg) {
    avg = (a + b + c) / static_cast<double>(3);
}

void Display(int& a, int& b, int& c, int& sum, float& avg) {
    cout << a << " + " << b << " + " << c << " = " << sum << endl;
    cout << "(" << a << " + " << b << " + " << c << ") / 3 = ";
    cout << fixed << setprecision(2) << avg << endl;
}

int main()
{
    // declare identifiers
    int x, y, z, Sum;
    float Average;
    // read three integer numbers into x , y, and z
    Read(x, y, z);
    // compute x+y
    Sum = CompSum(x, y, z);
    // compute the average of x, y, and z
    CompAve(x, y, z, Average);
    // display Sum and Average
    Display(x, y, z, Sum, Average);
    // terminate program - I HAD TO MODIFY MAIN BECAUSE I USE LINUX
    system("read -p 'Press Enter to continue...' ");
    return 0;
}