#include <iostream>

using namespace std;

int main() {
	char c;
	int lowercase_vowel, uppercase_vowel;
	cout << "Enter an alphabet: ";
	cin >> c;

	// evaluates to 1 if variable c is a lowercase vowel
	lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	// evaluates to 1 if variable c is a uppercase vowel
	uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	// Show error message if c is not an alphabet
	if (!isalpha(c))
		cout << "Error! Non-alphabetic character.";
	else if (lowercase_vowel || uppercase_vowel)
		cout << "c is a vowel.", c;
	else
		cout << "c is a constant.", c;

	return 0;
}