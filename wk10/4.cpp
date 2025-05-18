#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int choice, val[2], answer, correct, wrong;
    char again = 'y';

    srand(time(0));
    correct = wrong = 0;

    cout << "------Practice Arithmetic------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "    Enter your choice (1 | 2): ";

    cin >> choice;

    do
    {
        val[0] = rand() % 100; 
        val[1] = rand() % 100; 

        if (choice == 1)
        {
            cout << "        " << val[0] << " + " << val[1] << " = ? ";
            cin >> answer;
            if ((val[0] + val[1] == answer))
            {
                cout << "        CORRECT" << endl;
                correct += 1;
            }
            else {
                cout << "        WRONG" << endl;
                wrong += 1;
            }

            cout << "Continue (y | n)? ";
            cin >> again;
        }
        else if (choice == 2)
        {
            cout << "        " << val[0] << " - " << val[1] << " = ? ";
            cin >> answer;
            if ((val[0] - val[1] == answer))
            {
                cout << setw(8) << setfill(' ') << "CORRECT" << endl;
                correct += 1;
            }
            else {
                cout << setw(8) << setfill(' ') << "WRONG" << endl;
                wrong += 1;
            }

            cout << "Continue (y | n)? ";
            cin >> again;
        }
        else {
            again = 'y';
            cout << "Invalid choice: Exiting Practice" << endl;
        }
        
    } while (again == 'y');

    cout << "No. of CORRECT answers = " << correct << endl;
    cout << "No. of WRONG answers = " << wrong << endl;
    
	return 0;
}