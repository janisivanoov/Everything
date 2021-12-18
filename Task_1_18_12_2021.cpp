#include <iostream>
using namespace std;

int main()
{
	double tuition = 10000, total{}, yearincrease = 0.05;
	int menuchoice;

	cout << "Welcome to the tuition calculator!" << endl;
	cout << "1 Compute the yearly tuition in x years from today " << endl;
	cout << "2 Compute the total tuition cost for y years from today" << endl;
	cout << "3 Compute yearly tuition and total tuition cost at the end of each year, for x years " << endl;
	cout << "0 Quit program " << endl << endl;
	cout << "Enter your choice: ";
	cin >> menuchoice;

	if (menuchoice == 1) {
		cout << "You want to know the yearly tuition in how many years from today? ";
		int b;
		cin >> b;
		for (int i = 1; i <= b; i++) {
			tuition *= 1 + yearincrease;
		}

		cout << "The yearly tuition after " << b << " years from today will be " << tuition;
	}
	else if (menuchoice == 2) {
		cout << "You want to know the total tuition cost after how many years from today? ";
		int x;
		cin >> x;
		for (int i = 1; i <= x; i++) {
			total += tuition;
			tuition *= 1 + yearincrease;
		}

		cout << "The total tuition cost after " << x << " years from today will be " << total;
	}

	else if (menuchoice == 3) {
		cout << "How many years you want to consider starting from today? ";
		int k;
		cin >> k;
		cout << endl << "Year" << "    " << "Tuition" << "    " << "Total Tuition Cost at the End of Year" << endl;
		for (int i = 1; i <= k; i++) {
			total += tuition;
			tuition *= 1 + yearincrease;

			cout << endl << i << "       " << tuition << "          " << total;
		}
	}

	return 0;
}