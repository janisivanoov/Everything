#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	srand(time(0));
	cout << "Hello teacher! Enter % of attendance of the student:" << endl;
	cin >> num1;

	if (num1 > 21) {
		cout << "Enter how much homework did student done from all 5 assignments" << endl;
		cin >> num2;
		if (num2 == 1) {
			int num3 = 0;
			num3 = rand() % 60 + 40;
			if (num3 < 100) {
				cout << "% is" << num3;
				if (num3 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num3 <= 89 && num3 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num3 >= 70 && num3 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num3 <= 69 && num3 >= 60) {
					cout << "Grade is d" << endl;
				}
			}
		}
		if (num2 == 2) {
			int num3 = 0;
			int num4 = 0;
			num3 = rand() % 60 + 40;
			num4 = rand() % 60 + 40;
			if (num3 + 6 < 100 && num4 + 6 < 100) {
				cout << "% is" << num3;
				if (num3 + 6 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num3 + 6 <= 89 && num3 + 6 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num3 + 6 >= 70 && num3 + 6 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num3 + 6 <= 69 && num3 + 6 >= 60) {
					cout << "Grade is d" << endl;
				}
				cout << "% is" << num4;
				if (num4 + 6 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num4 + 6 <= 89 && num4 + 6 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num4 + 6 >= 70 && num4 + 6 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num4 + 6 <= 69 && num4 + 6 >= 60) {
					cout << "Grade is d" << endl;
				}
			}
		}
		if (num2 == 3) {
			int num3 = 0;
			int num4 = 0;
			int num5 = 0;
			num3 = rand() % 60 + 40;
			num4 = rand() % 60 + 40;
			num5 = rand() % 60 + 40;

			cout << "% is" << num3;
			if (num3 + 9 >= 90) {
				cout << "Grade is " << "a" << endl;
			}
			if (num3 + 9 <= 89 && num3 + 9 >= 80) {
				cout << "Grade is " << "b" << endl;
			}
			if (num3 + 9 >= 70 && num3 + 9 <= 79) {
				cout << "Grade is " << "c" << endl;
			}
			if (num3 + 9 <= 69 && num3 + 9 >= 60) {
				cout << "Grade is d" << endl;
			}

			cout << "% is" << num4;
			if (num4 + 9 >= 90) {
				cout << "Grade is " << "a" << endl;
			}
			if (num4 + 9 <= 89 && num4 + 9 >= 80) {
				cout << "Grade is " << "b" << endl;
			}
			if (num4 + 9 >= 70 && num4 + 9 <= 79) {
				cout << "Grade is " << "c" << endl;
			}
			if (num4 + 9 <= 69 && num4 + 9 >= 60) {
				cout << "Grade is d" << endl;
			}

			cout << "% is" << num5;
			if (num5 + 9 >= 90) {
				cout << "Grade is " << "a" << endl;
			}
			if (num5 + 9 <= 89 && num5 + 9 >= 80) {
				cout << "Grade is " << "b" << endl;
			}
			if (num5 + 9 >= 70 && num5 + 9 <= 79) {
				cout << "Grade is " << "c" << endl;
			}
			if (num5 + 9 <= 69 && num5 + 9 >= 60) {
				cout << "Grade is d" << endl;
			}

			if (num2 == 4) {
				int num3 = 0;
				int num4 = 0;
				int num5 = 0;
				int num6 = 0;
				num3 = rand() % 60 + 40;
				num4 = rand() % 60 + 40;
				num5 = rand() % 60 + 40;
				num6 = rand() % 60 + 40;

				cout << "% is" << num3;
				if (num3 + 12 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num3 + 12 <= 89 && num3 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num3 + 12 >= 70 && num3 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num3 + 12 <= 69 && num3 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}

				cout << "% is" << num4;
				if (num4 + 12 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num4 + 12 <= 89 && num4 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num4 + 12 >= 70 && num4 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num4 + 12 <= 69 && num4 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}

				cout << "% is" << num5;
				if (num5 + 12 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num5 + 12 <= 89 && num5 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num5 + 12 >= 70 && num5 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num5 + 12 <= 69 && num5 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}

				cout << "% is" << num6;
				if (num6 + 12 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num6 + 12 <= 89 && num6 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num6 + 12 >= 70 && num6 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num6 + 12 <= 69 && num6 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}
			}
			if (num2 == 5) {
				int num3 = 0;
				int num4 = 0;
				int num5 = 0;
				int num6 = 0;
				int num7 = 0;
				num3 = rand() % 60 + 40;
				num4 = rand() % 60 + 40;
				num5 = rand() % 60 + 40;
				num6 = rand() % 60 + 40;
				num7 = rand() % 60 + 40;

				cout << "% is" << num3;
				if (num3 + 12 >= 90) {
					cout << "Grade is " << "a" << endl;
				}
				if (num3 + 12 <= 89 && num3 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num3 + 12 >= 70 && num3 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num3 + 12 <= 69 && num3 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}

				cout << "% is" << num4;
				if (num4 + 12 >= 90 && num4 + 12 < 100) {
					cout << "Grade is " << "a" << endl;
				}
				if (num4 + 12 <= 89 && num4 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num4 + 12 >= 70 && num4 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num4 + 12 <= 69 && num4 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}

				cout << "% is" << num5;
				if (num5 + 12 >= 90 && num5 + 12 < 100) {
					cout << "Grade is " << "a" << endl;
				}
				if (num5 + 12 <= 89 && num5 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num5 + 12 >= 70 && num5 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num5 + 12 <= 69 && num5 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}

				cout << "% is" << num6;
				if (num6 + 12 >= 90 && num6 + 12 < 100) {
					cout << "Grade is " << "a" << endl;
				}
				if (num6 + 12 <= 89 && num6 + 12 >= 80) {
					cout << "Grade is " << "b" << endl;
				}
				if (num6 + 12 >= 70 && num6 + 12 <= 79) {
					cout << "Grade is " << "c" << endl;
				}
				if (num6 + 12 <= 69 && num6 + 12 >= 60) {
					cout << "Grade is d" << endl;
				}
			}
		}
	}

	if (num1 < 20) {
		cout << "Grade is " << "f" << endl;
	}

	return 0;
}