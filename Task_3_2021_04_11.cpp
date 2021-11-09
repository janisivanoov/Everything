#include <iostream>

using namespace std;

int main()
{
	int num1, num2, digit, rev = 0;

	cout << "Enter a positive number: ";
	cin >> num2;

	num1 = num2;

	do
	{
		digit = num2 % 10;

		rev = (rev * 10) + digit;

		num2 = num2 / 10;
	} while (num2 != 0);

	if (num1 == rev)
		cout << "The number " << num1 << " is a palindrome.";
	else
		cout << "The number " << num1 << " is not a palindrome.";

	return 0;
}