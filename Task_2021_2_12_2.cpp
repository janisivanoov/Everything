#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int hours, prcnt_1, prcnt_2;
	double hourly_pay_rate;
	string s;
	string week_num;
	cout << "Payroll Application" << endl;

	cout << "Enter week number: " << endl;
	cin >> week_num;

	cout << "Ente employee's name: " << endl;
	cin >> s;

	cout << "Enter number of hours worked in a week: " << endl;
	cin >> hours;

	cout << "Enter hourly pay rate: " << endl;
	cin >> hourly_pay_rate;

	cout << "Enter federal tax with holding rate(%): " << endl;
	cin >> prcnt_1;

	cout << "Enter state tax with holding rate(%): " << endl;
	cin >> prcnt_2;

	double s12 = hourly_pay_rate * hours;
	double prcntt_1 = (s12 * prcnt_1) / 100;
	double prcntt_2 = (s12 * prcnt_2) / 100;
	double sum_prcnt = prcntt_1 + prcntt_2;

	ofstream outfile(s + "_week_" + week_num + ".txt");
	outfile << "Employee Name: " << s << endl;
	outfile << "Hours Worked: " << hours << endl;
	outfile << "Pay Rate: " << hourly_pay_rate << "$" << endl;
	outfile << "Gross Pay: " << s12 << "$" << endl;
	outfile << "Deductions:" << endl;
	outfile << "\tFederal With holding (" << prcnt_1 << "%) " << prcntt_1 << "$" << endl;
	outfile << "\tState With holding (" << prcnt_2 << "%) " << prcntt_2 << "$" << endl;
	outfile << "\tTotal Deduction: $" << sum_prcnt << endl;
	outfile << "Net Pay:" << s12 - sum_prcnt << "$" << endl;
	outfile.close();

	return 0;
}