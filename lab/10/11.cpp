#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PrintAllPermutations(vector<string> permList, vector<string> nameList) {
    if (nameList.empty()) {
        for (int i = 0; i < permList.size(); ++i) {
            cout << permList[i];
            if (i < permList.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
        return;
    }
    
    for (int i = 0; i < nameList.size(); ++i) {
        vector<string> newPermList = permList;
        vector<string> newNameList = nameList;
        
        newPermList.push_back(nameList[i]);
        newNameList.erase(newNameList.begin() + i);
        
        PrintAllPermutations(newPermList, newNameList);
    }
}

int main() {
    vector<string> nameList;
    vector<string> permList;
    string name;
    
    while (true) {
        cin >> name;
        if (name == "-1") {
            break;
        }
        nameList.push_back(name);
    }
    
    PrintAllPermutations(permList, nameList);
    
    return 0;
}