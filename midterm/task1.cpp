#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, h, perimeter;
    double area;

    cout << "    /|\\" << endl;
    cout << "   / | \\" << endl;
    cout << "a /  |  \\ b" << endl;
    cout << " /   | h \\" << endl;
    cout << " ----------" << endl;
    cout << "     c" << endl;

    cout << "Enter the values of a, b, c, and h: ";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> h;
    
    area = (c * h) / 2.0;
    perimeter = a + b + c;

    cout << "  Area = ch/2 = " << fixed << setprecision(2) << area << endl;
    cout << "  Perimeter = a+b+c = " << perimeter << endl;
    return 0;
}
