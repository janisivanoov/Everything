#include <iostream>

using namespace std;

int main()
{
	int num1 = 1;
	while (num1 != 0) {
		cout << "Enter a number" << endl;
		cin >> num1;

		if (num1 > 0) {
			cout << "Number " << num1 << " is positive\n";

			if ((num1 % 4 == 0) == true) {
				cout << "Number " << num1 << " is a multiple of 4" << endl;
			}

			else {
				cout << "Number " << num1 << " isn't a multiple of 4" << endl;
			}
		}

		else {
			cout << "Number " << num1 << " is negative number" << endl;
		}

		if (num1 == 0) {
			exit(0);
		}
	}

	return 0;
}
/*
	int num1, num2 = 4;

	cout << "Enter a number";
	cin >> num1;
	if (num1 < 0) {
		cout << "Number" << num1 << "is positive";
		if ((num1 % 4 == 0) == true) {
			cout << "Xyi" << endl;
		}
	}
	return 0;*/