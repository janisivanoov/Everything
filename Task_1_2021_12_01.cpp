#include <iostream>

using namespace std;

double checkIfEven(int num) {
	if (num % 2 == 0)
		cout << num << " is even.";
	else
		cout << num << " is odd.";
}

int main() {
	int n;

	cout << "Enter an integer: ";
	cin >> n;

	checkIfEven(n);

	return 0;
}