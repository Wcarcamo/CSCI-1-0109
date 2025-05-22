#include <iostream>
#include <string>
#include <fstream>
#include <ios>
#include <algorithm>

using namespace std;

void copyData(string file, string data[])
{
    ifstream inputFile;
    int totalNames;
    inputFile.exceptions(ifstream::failbit);

    try
    {
        inputFile.open(file);

        inputFile >> totalNames;
        for (int i = 0; i < totalNames; ++i)
        {
            inputFile >> data[i];
        }
    }
    catch (ios_base::failure &excpt)
    {
        cout << "Error reading file input: " << excpt.what() << endl;
    }

    // Closes the opened file.
    if (inputFile.is_open())
    {
        inputFile.close();
    }
}

void displayNames(string list[]) {
    for (size_t i = 0; i < 10; ++i)
    {
        cout << list[i] << endl;
    }
    
}

int main()
{
    string names[10];

    copyData("data.txt", names);
    cout << "Names:" << endl;
    displayNames(names);
    sort(names, names+10);
    cout << endl << "Sorted:" << endl;
    displayNames(names);
    return 0;
}
