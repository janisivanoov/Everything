#include <iostream>

using namespace std;

int main()
{
	double pounds, kilos, inches, meters, BMI;

	cout << "Enter weight in pounds: ";
	cin >> pounds;

	cout << "Enter height in inches: ";
	cin >> inches;

	kilos = pounds * 0.454;
	meters = inches * 0.0254;

	BMI = kilos / pow(meters, 2);

	cout << "Your BMI " << BMI << endl;

	if (BMI < 18.5) {
		cout << "Your BMI considers you are : Underweight" << endl;
	}
	if (BMI >= 18.5 && BMI < 25.0) {
		cout << "Your BMI considers you are : Normal" << endl;
	}
	if (BMI >= 25.0 && BMI < 30.0) {
		cout << "Your BMI considers you are : Overweight" << endl;
	}
	if (BMI >= 30.0) {
		cout << "Your BMI considers you are : Obese" << endl;
	}

	return 0;
}