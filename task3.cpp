#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void readContract(string name, 
    string telephone, 
    int birthdayD, int birthdayM) {

    contactRec cRec;
    birthdayRec bRec;

    bRec.day = birthdayD;
    bRec.month = birthdayM;
    cRec.name = name;
    cRec.telephone = telephone;

    cout << cRec.name;
    cout << cRec.telephone;
    cout << bRec.day;
    cout << bRec.month;
}

void deleteContact(int contactRe[]) {
    int numb;

    cout << "Enter a number u want to delete: \n";
    cin >> numb;

    contactRec cRec;
    if (contactRe[numb] != NULL) {
        contactRe[numb] == NULL;
        cout << "Done";
    }
    else {
        cout << "Contact not founded!" << endl;
    }
}

void displayContracts(int contactRe[]) {
    int lenght = sizeof(contactRe) / sizeof(int);
    for (int i = 0; i < lenght; ++i) {
        cout << contactRe[i];
    }
}

int main()
{
    int numb;
    int justArray[] = { 1, 2, 3, 4 };
    cout << "Select what you want: \n";
    cout << "1 to add a contract \n";
    cout << "2 to delete a contract \n";
    cout << "3 to display all contacts \n";
    cout << "4 to exit \n";
    cin >> numb;

    assert(numb > 0 && numb < 5);

    switch(numb) {
    case 1:
        readContract("Janis", "99633191", 12, 8);
        break;
    case 2:
        deleteContact(justArray);
        break;
    case 3:
        displayContracts(justArray);
        break;
    case 4:
        exit(1);
        break;
    }
}

class birthdayRec {
public:
    int day, month;
};

class contactRec {
public:
    string name, telephone;
    birthdayRec birthday;
};