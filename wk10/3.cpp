#include <iostream>
#include <iomanip>
using namespace std;

double convertFtoC(int farenheight) {
    double celcius;

    celcius = (5 * (static_cast<double>(farenheight) - 32)) / 9;

    return celcius;
}

int main() {
    int start, end, next;

    cout << "This is a temperature conversion table ( C = 5* (F-32) / 9)" << endl;
    cout << "  Enter the table size (start, end, next): ";

    cin >> start >> end >> next;

    cout << "F           C" << endl;
    cout << "-------------" << endl;

    for (int i = start; i <= end; i += next)
    {
        cout << fixed << setprecision(2);
        cout << i << setw(10) << convertFtoC(i) << endl; 
    }

	return 0;
}