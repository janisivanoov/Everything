#include <iostream>

using namespace std;

int main()
{
	int max, count = 5, celc, faren;

	do {
		cout << "Enter min value: \n";
		cin >> celc;
		cout << "Enter max value: \n";
		cin >> max;
	} while (max == 0 || celc == 0);

	if (celc >= max) {
		cout << "Something went wrong!" << endl;
	}
	else {
		while (celc <= max) {
			faren = (9.0 / 5.0) * celc + 32.0;
			cout << "Far: " << faren << " Celc " << celc << endl;
			celc += count;
		}
	}
	return 0;
}