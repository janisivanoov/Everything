#include <iostream>

using namespace std;

int main()
{
	int a, total_positive = 0, count_positive = 0, total_negative = 0, count_negative = 0;

	while (true)
	{
		cout << "Enter a number: ";
		cin >> a;

		if (a == 0)
		{
			cout << "You chose to exit\n";
			break;
		}
		else if (a > 0)
		{
			total_positive = total_positive + a;
			count_positive++;
		}
		else
		{
			total_negative = total_negative + a;
			count_negative++;
		}
	}

	if (count_positive == 0)
		cout << "You Did not enter any positive integer\n";
	else
	{
		cout << "You Entered " << count_positive << " positive integers\t";
		cout << "Sum = " << total_positive << "\t Average = " << (float(total_positive) / float(count_positive)) << endl;
	}

	if (count_negative == 0)
		cout << "No negative\n";
	else
	{
		cout << count_negative << " neg integers\t";
		cout << "Sum " << total_negative << "\t Average = " << (float(total_negative) / float(count_negative)) << endl;
	}

	return 0;
}