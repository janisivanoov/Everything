#include <iostream>

using namespace std;

int main()
{
	int side1, side2, result;

	cout << "Input the lengths of the sides of a triangle\n";

	cout << "Enter a first side:\n";
	cin >> side1;
	cout << "Side A length:" << side1 << endl;;

	cout << "Enter a second side:\n";
	cin >> side2;
	cout << "Side B length:" << side2 << endl;;

	result = sqrt((side1 * side1) + (side2 * side2));

	cout << "Based on the Pythagorean theorem, the length of side C is:" << result << endl;

	return 0;
}