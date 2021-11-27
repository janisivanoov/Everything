#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, j, k, rows;
	cout << "Enter the number of rows: ";
	cin >> rows;
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= i; j++) {
			cout << "*";
		}
		for (j = i * 2; j < rows * 2; j++) {
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}