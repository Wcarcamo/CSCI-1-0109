#include <iostream>
#include <string>
using namespace std;

int main() {
    string grades;
    int A, B, C, D, F;
    A = B = C = D = F = 0;
    int i = 0;

    cout << "Enter a string of grades: ";
    cin >> grades;

    while (i < grades.length())
    {
        switch (std::toupper(grades[i]))
        {
            case 'A': A += 1; break;        
            case 'B': B += 1; break;
            case 'C': C += 1; break;
            case 'D': D += 1; break;
            case 'F': F += 1; break;
            default: break;
        }
        ++i;
    }

    cout << "No. of A's..............." << A << endl;
    cout << "No. of B's..............." << B << endl;
    cout << "No. of C's..............." << C << endl;
    cout << "No. of D's..............." << D << endl;
    cout << "No. of F's..............." << F << endl;
    
	return 0;
}