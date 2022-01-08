#include <iostream>

using namespace std;

int main()
{
	double n1, n2, n3, n4, n5;
	cout << "Give me 5 numbers:";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	double result = (n1 + n2 + n3 + n4 + n5) / 5;
	cout << "The average of these 5 numbers is:" << result << endl;
}