#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

void pointInRectangle(double width, double height, double x, double y);

int main() {
	double width, height, area, perimeter, diagonal, x, y;

	cout << "Enter the width of the rectangle: " << endl;
	cin >> width;

	cout << "Enter the height of the rectangle: " << endl;
	cin >> height;

	cout << "Enter x:" << endl;
	cin >> x;

	cout << "Enter y:" << endl;
	cin >> y;

	pointInRectangle(width, height, x, y);

	return 0;
}

void pointInRectangle(double width, double height, double x, double y) {
	double perimeter;
	double diagonal;
	double area;

	perimeter = width * 2 + height * 2;
	area = width * height;
	diagonal = sqrt(width * width + height * height);

	if (x <= perimeter && y <= perimeter && x <= diagonal && y <= diagonal && x <= area && y <= area) {
		cout << "Points are in" << endl;
	}
	else {
		cout << "Points are out" << endl;
	}
}