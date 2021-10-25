#include<iostream>

using namespace std;

int main()
{
	const float KG_PER_POUND = 0.45359237;
	const float METER_PER_INCH = 0.0254;

	float pound, inch;

	cout << "Enter weigth in pounds :";
	cin >> pound;

	cout << "Enter heigth in inces :";
	cin >> inch;

	float bmi = (float)(pound * KG_PER_POUND) / ((inch * METER_PER_INCH) * (inch * METER_PER_INCH));

	cout << "BMI is " << bmi;

	return 0;
}