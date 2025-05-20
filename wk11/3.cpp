#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void DisplayMenu() {
    cout << "------Practice Arithmetic------" << endl;
    cout << "  1. Addition" << endl;
    cout << "  2. Subtraction" << endl << endl;
}

void Select(int& selection) {
    cout << "Enter your choice (1 / 2): ";
    cin >> selection;
}


void displayScore(int& correct, int& wrong) {
    cout << "No. of CORRECT answers = " << correct << endl;
    cout << "No. of WRONG answers = " << wrong << endl;
}

void PracticeAdd() {
    int val[2], answer, correct = 0, wrong = 0;
    char again;
    again = 'y';

    do
    {
        val[0] = rand() % 100; 
        val[1] = rand() % 100; 

        cout << "    " << val[0] << " + " << val[1] << " = ? ";
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

        cout << "Continue (y / n)? ";
        cin >> again;
        
    } while (again == 'y');

    displayScore(correct, wrong);
}

void PracticeSub() {
    int val[2], answer, correct = 0, wrong = 0;
    char again;
    again = 'y';
    
    do
    {
        val[0] = rand() % 100; 
        val[1] = rand() % 100; 

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
        
    } while (again == 'y');

    displayScore(correct, wrong);
}

int main()
{ // display menu
    DisplayMenu();
    // select your choice
    int choice;
    Select(choice);
    // test your choice
    switch (choice)
    {
    case 1:
        PracticeAdd();
        break;
    case 2:
        PracticeSub();
        break;
    }
    // terminate program - I HAD TO MODIFY MAIN BECAUSE I USE LINUX
    system("read -p 'Press Enter to continue...' ");
    return 0;
}
