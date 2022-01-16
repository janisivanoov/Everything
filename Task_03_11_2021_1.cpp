#include <iostream>

using namespace std;

int main()
{
	cout << "How many courses have you attended? ";
	int howmany;
	cin >> howmany;

	if (howmany > 6) {
		cout << "So much bruh" << endl;
		exit(1);
	}

	char name;
	int which_one;
	double tot_g_p{}, tot_h{};

	for (int i = 0; i < howmany; i++) {
		cout << "\nEnter a name:";
		cin >> name;

		cout << "\nWhich one?";
		cin >> which_one;

		cout << "\nWhat are the credit hours:";
		int cred_hours;
		cin >> cred_hours;

		tot_h += cred_hours;

		cout << "\nWhat grade:";
		char grade;
		cin >> grade;

		switch (grade) {
		case 'A':
			tot_g_p += 40;
			break;
		case 'B':
			tot_g_p += 30;
			break;
		case 'C':
			tot_g_p += 20;
			break;
		case 'D':
			tot_g_p += 10;
			break;
		case 'F':
			tot_g_p += 0;
			break;
		default:
			cout << "Unknown mark!" << endl;
		}
	}

	cout << "Your current GPA is " << tot_g_p / tot_h << endl;

	return 0;
}