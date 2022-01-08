#include <iostream>

using namespace std;

int main()
{
	double x1, x2, y1, y2;

	cout << "Enter the coordinates of the first point:";
	cin >> x1 >> x2;

	cout << "Enter the coordinates of the second point:";
	cin >> y1 >> y2;

	double result = (y2 - y1) / (x2 - x1);

	cout << "The slope of the line connecting (" << x1 << "," << x2 << ") and (" << y1 << "," << y2 << ") is:" << result << endl;
}