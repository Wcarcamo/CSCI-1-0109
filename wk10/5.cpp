#include <iostream>
#include <string>
using namespace std;

void printStars(int num) {
    for (size_t j = 0; j < num; ++j)
    {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    string genders;
    int M = 0, F = 0, i = 0;

    cout << "Enter a group of genders: ";
    cin >> genders;

    while (i < genders.length())
    {
        switch (std::toupper(genders[i]))
        {
            case 'M': M += 1; break;        
            case 'F': F += 1; break;
            default: break;
        }
        ++i;
    }

    cout << "No. of MALES   = ";
    printStars(M);
    cout << "No. of FEMALES = ";
    printStars(F);
    
	return 0;
}