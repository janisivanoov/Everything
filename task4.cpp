#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

typedef vector<student> studentVector;

struct student {
    string surname, name;
    int assignment, midterm, final;
    char grade;
} s ;

char calulatedGrade(int assgnm, int mdtrm, int fnl) {
    s.assignment = assgnm;
    s.midterm = mdtrm;
    s.final = fnl;

    int calculator = ((s.assignment * 15) / 100) + ((s.midterm * 40) / 100) + ((s.final * 45) / 100);

    assert(calculator > 0 && calculator < 100);

    if (calculator > 90 && calculator < 100) {
        return 'A';
    }
    if (calculator > 80 && calculator < 89) {
        return 'B';
    }
    if (calculator > 70 && calculator < 79) {
        return 'C';
    }
    if (calculator > 60 && calculator < 69) {
        return 'D';
    }
    if (calculator > 0 && calculator < 59) {
        return 'F';
    }
}

void readStudent(string name, string surname, int assignG, int midtermG, int finalG) {
    s.name = name;
    s.surname = surname;
    
    cout << "Name: " << s.name << "Surname: " << s.surname << "Grade: " << calulatedGrade(assignG, midtermG, finalG) << endl;
}

void printStudents(struct student st[3], int n) {

    for (int i = 0; i < 3; ++i) {
        if (calulatedGrade(st[i].assignment, st[i].midterm, st[i].final) == n) {
            cout << "Founded student: " << st[i].name << st[i].surname << calulatedGrade(st[i].assignment, st[i].midterm, st[i].final) << endl;
        }
        else {
            continue;
        }
    }
}

void display(struct student st[3]) {
    int len = 3;

    for (int i = 0; i < len; ++i) {
        cout << st[i].name << st[i].surname << calulatedGrade(st[i].assignment, st[i].midterm, st[i].final) << endl;
    }
}

int main()
{
    int numb, assignG, midtermG, finalG, lookingNum;
    string name, surname;
    
    studentVector stdnts;

    cout << "Test for dynamic array: " << endl;

    cout << "Enter a name: \n";
    cin >> name;
    s.name = name;

    cout << "Enter surname: \n";
    cin >> surname;
    s.surname = surname;

    cout << "Enter an assignment grade: \n";
    cin >> assignG;
    s.assignment = assignG;

    cout << "Enter an midterm grade: \n";
    cin >> midtermG;
    s.midterm = midtermG;

    cout << "Enter a final grade: \n";
    cin >> finalG;
    s.final = finalG;

    stdnts.push_back(s.name);
    stdnts.push_back(s.surname);
    stdnts.push_back(s.assignment);
    stdnts.push_back(s.midterm);
    stdnts.push_back(s.final);

    cout << "Select what you want: \n";
    cout << "1 to insert a student \n";
    cout << "2 to display students received a particular grade \n";
    cout << "3 to display all students \n";
    cout << "4 to exit \n";
    cin >> numb;

    assert(numb > 0 && numb < 5);

    if (numb == 1) {
        cout << "Enter a name: \n";
        cin >> name;

        cout << "Enter surname: \n";
        cin >> surname;

        cout << "Enter an assignment grade: \n";
        cin >> assignG;

        cout << "Enter an midterm grade: \n";
        cin >> midtermG;

        cout << "Enter a final grade: \n";
        cin >> finalG;

        assert(assignG > 0 && assignG < 100 && midtermG > 0 && midtermG < 100 && finalG > 0 && finalG < 100);

        readStudent(name, surname, assignG, midtermG, finalG);
    }

    if (numb == 2) {
        struct student st[3] = {};

        for (int i = 0; i < 3; ++i) {
            cout << "Enter a name: \n";
            cin >> name;
            st[i].name = name;

            cout << "Enter surname: \n";
            cin >> surname;
            st[i].surname = surname;

            cout << "Enter an assignment grade: \n";
            cin >> assignG;
            st[i].assignment = assignG;

            cout << "Enter an midterm grade: \n";
            cin >> midtermG;
            st[i].midterm = midtermG;

            cout << "Enter a final grade: \n";
            cin >> finalG;
            st[i].final = finalG;

            assert(assignG > 0 && assignG < 100 && midtermG > 0 && midtermG < 100 && finalG > 0 && finalG < 100);

            st[i] = { st[i].name, st[i].surname, st[i].assignment, st[i].midterm, st[i].final };
        }

        cout << "Enter a grade u looking for: \n";
        cin >> lookingNum;

        printStudents(st, lookingNum);
    }

    if (numb == 3) {
        struct student st[3] = { {"Janis", "Ivanou", 80, 80, 80}, {"Andrey", "Pohadayeu", 80, 80, 80}, {"Dmitrii", "Frolov", 80, 80, 80}};
        display(st);
    }

    if (numb == 4) {
        exit(4);
    }

    return 0;
}