#include <iostream>

using namespace std;

void arrow(int, char);

const string MY = "Myself";
const string COMP = "Computer";
const string my = "myself";
const string comp = "comp";
const string NO = "NO";
const string YES = "YES";
const string no = "no";
const string yes = "yes";

int main()
{
	string ans;
main:
	cout << "Welcome to menu!" << endl;
	cout << "Do you want computer let build something OR you want it by urself?" << endl;
	cin >> ans;

	if (ans == MY || ans == my) {
		int num1 = 1;
		char c;
		while (num1 != 0) {
			cout << "Enter number of cubes:" << endl;
			cout << "To quit enter 0" << endl;
			cin >> num1;
			if (num1 == 0) {
				cout << "Okay goodbye!" << endl;
				exit(1);
			}
			cout << "Enter how 'b' - big OR 's' - small" << endl;
			cin >> c;

			arrow(num1, c);
			string ans2;
			cout << "Do you want to go to menu?" << endl;
			cin >> ans2;
			if (ans2 == YES || ans2 == yes) {
				goto main;
			}
			if (ans2 == NO || ans2 == no) {
				continue;
			}
		}
	}
	if (ans == COMP || ans == comp) {
		cout << "Start?" << endl;
		string ans4;
		cin >> ans4;
		while (ans4 != NO || ans4 != no) {
			if (ans4 == YES || ans4 == yes) {
				arrow(4, 's');
				string ans3;
				cout << "Want again?" << endl;
				cin >> ans3;
				if (ans3 == NO || ans3 == no) {
					goto main;
				}
				if (ans3 == YES || ans3 == yes) {
					continue;
				}
			}
		}
	}
	return 0;
}

void arrow(int a, char symb) {
	switch (symb) {
	case 's':
		for (int i = 0; i < a; i++) {
			cout << "$ $ $" << endl;
			cout << "$   $" << endl;
			cout << "$ $ $" << endl;
			cout << endl;
		}
		break;
	case 'b':
		for (int i = 0; i < a; i++) {
			cout << "$ $ $ $" << endl;
			cout << "$     $" << endl;
			cout << "$ $ $ $" << endl;
			cout << endl;
		}
		break;
	}
}