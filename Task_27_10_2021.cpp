#include <cstdlib>
#include <iostream>

using namespace std;

const string YES = "yes";
const string NO = "no";

int main()
{
	char symb;
	string answer;

	cout << "Hello my lord and welcome there!\t" << "Choose the figure u want to calculate" << endl;
	cout << "Would you like to choose figure you want me to calculate?\n";

	cin >> answer;

	if (answer == YES) {
		cout << "Greate, choose option: r - rectangle\n, t - triangle\n, s - square\n, c - cylinder:\n";
		cin >> symb;
		switch (symb)
		{
		case 'r':
			double h, w;
			cout << "Enter w:\n";
			cin >> w;
			cout << "Enter h:\n";
			cin >> h;
			cout << "The area will be" << w * h << endl;
			break;

		case 't':
			double b, h;
			cout << "Enter b:\n";
			cin >> b;
			cout << "Enter h:\n";
			cout << "The area will be:" << (1 / 2) * b * h << endl;
			break;

		case 's':
			double a;
			cout << "Enter a:\n";
			cin >> a;
			cout << "The area will be:" << pow(a, 2) << endl;
			break;

		case 'c':
			double pi = 3.14, r, h;
			cout << "Enter r:\n";
			cin >> r;
			cout << "Enter h:\n";
			cout << h;
			cout << "The volume will be:" << pi * pow(r, 2) * h << endl;
			break;

		default:
			break;
		}
	}

	if (answer == NO) {
		cout << "Okay goodbye\n";
	}

	cout << "Goodbye!\n";

	return 0;
}