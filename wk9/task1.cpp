#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age, income, socialSecurity;
public:
    Student(string setName,int setAge,int setIncome,int setSocialSecurity) {
        name = setName;
        age = setAge;
        income = setIncome;
        socialSecurity = setSocialSecurity;
    };
    void eat() {cout << name << " is eating." <<endl;};
    void sleep() {cout << name << " is sleeping." <<endl;};
    void study() {cout << name << " is studying." <<endl;};
    void cheat() {cout << name << " is cheating." <<endl;};
    string getName() {return name;};
    int getAge() {return age;};
    int getIncome() {return income;};
    int getSocial() {return socialSecurity;};
};

void interactStudent(Student student[], int N) {
    student[N].eat();
    student[N].study();
    student[N].cheat();
    student[N].sleep();
    cout << endl;
}

int LinearMaxIncomeSearch(Student student[], int N) {
    int maxIncome, index;

    if (N <= 0)
    {
        return -1;
    }
    maxIncome = student[0].getIncome();
    index = 0;

    for (int i = 0; i < N; ++i) {
        if (student[i].getIncome() > maxIncome) {
            maxIncome = student[i].getIncome();
            index = i;
        }
    }
     
    return index;
}

void SelectionSortByAge(Student students[], int N) {
    for (int i = 0; i < N - 1; ++i) {
        int youngest = i;
        for (int j = i + 1; j < N; ++j) {
            if (students[j].getAge() < students[youngest].getAge()) {
                youngest = j; 
            }
        }

        if (youngest != i) {
            Student temp = students[i];
            students[i] = students[youngest];
            students[youngest] = temp;
        }
    }
}

int main()
{
    Student students[10] = {
        Student("Jake", 20, 20000, 12345),
        Student("Melanie", 19, 20000, 63246),
        Student("George", 22, 30000, 74534),
        Student("Lucas", 20, 25000, 75437),
        Student("Anthony", 20, 50000, 75437),
        Student("Craig", 25, 60000, 84283),
        Student("Fiona", 21, 42000, 38945),
        Student("Rudy", 30, 80000, 43109),
        Student("Pam", 24, 55000, 95723),
        Student("Angela", 22, 48000, 73289)
    };
    int index,richStudent;

    index = rand() % 10;
    interactStudent(students, index);

    richStudent = LinearMaxIncomeSearch(students, 10);

    cout << students[richStudent].getName() << " makes the most money." << endl << endl;

    SelectionSortByAge(students, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << students[i].getName() << " is " << students[i].getAge() << " years old." << endl;
    }

    return 0;
}
