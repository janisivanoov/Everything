#include <iostream>

using namespace std;

enum day{ Mon = 0, Tue = 1, Wed = 2, Thur = 3, Fri = 4, Sat = 5, Sun = 6 };

int yesterday(enum day d) {
	return d - 1;
}

int tomorrow(enum day d) {
	return d + 1;
}

int lapsed(enum day d, int n) {
	return d + n;
}

bool weekend() {
	int n;
	cout << "Enter a day: \n";
	cin >> n;
	if (n != Sat && n != Sun) {
		return false;
	}
	else {
		return true;
	}
}

int main()
{
	enum day days;
	enum day today;
	int dayRead, todayD, counter;

	cout << "Enter a day: \n";
	cin >> dayRead;

	days == dayRead;

	cout << days;

	cout << "Enter todays day: \n";
	cin >> todayD;
	today == todayD;

	cout << "How much days u want to count for? \n";
	cin >> counter;

	cout << "Result: " << today + counter << endl;
}