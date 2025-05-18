#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int score, sum, max, min, num;
    double avg;
    sum = 0;

    cout << "Enter a group of scores with -1 at the end: ";
    cin >> score;
    max = min = score;
    num = 1;

    while (score != -1)
    {
        sum += score;
        if (score > max)
        {
            max = score;
        }
        if (score < min)
        {
            min = score;
        }
        num += 1;
        cin >> score;
    }
    avg = static_cast<double>(sum) / num;

    cout << "Average = " << fixed << setprecision(2) << avg << endl;
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    
	return 0;
}