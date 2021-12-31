#include <iostream>

using namespace std;

int main()
{
	double w, h, num3, num4;

	cout << "Enter width and height of a rectangle centered at (0,0) :";
	cin >> w >> h;

	cout << "Enter the two coordinates of the point:";
	cin >> num3 >> num4;

	if (num3 >= w / 2 && num4 >= h / 2)
		cout << "Point (" << num3 << "," << num4 << ") isn't in the rectangle" << endl;
	else
		cout << "Point (" << num3 << "," << num4 << ") is in the rectangle" << endl;

	return 0;
}