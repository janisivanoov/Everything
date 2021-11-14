#include <iostream>

using namespace std;

int main()
{
	double month = 9.99, count, sum_10, free_movies, need_to_pay, count_1, sum_15, sum_20, sum_45, count_2, count_3, count_4;

	sum_10 = month + 0;

	cout << "Welcome to MovieFlix!\n";
	cout << "To calculate which is the cost for this month enter how much movies you already seen using MovieFlix:\n";
	cout << "Keep in mind that the month charge is 9.99EUR always even if you didnt use our service at all!\n";
main:
	cout << "Enter how much movies have you seen:\t";
	cin >> count;

	if (count < 0.0) {
		cout << "You entered wrong number\n";
		goto main;
	}

	if (count <= 10 && count > 0) {
		cout << "10 movies are free plus month payment:" << sum_10;
	}

	if (count < 20 && count >= 16) {
		sum_15 = (count - 10) * 1.5 + month;

		cout << sum_15;
	}

	if (count < 45 && count > 20) {
		count_2 = count - 25;

		if (count < 25) {
			sum_20 = (count - 10) * 1.5 + month;

			cout << sum_20;
		}

		if (count == 25) {
			sum_20 = (15 * 1.5) + month;

			cout << sum_20;
		}

		if (count > 25) {
			count_1 = count - 10;
			count_2 = count_1 - 15;

			sum_20 = (count_1 * 1.5) + (count_2 * 3) + month;

			cout << sum_20;
		}
	}
	if (count > 45) {
		count_1 = count - 10;
		count_2 = count_1 - 15;
		count_3 = count_2 - 20;

		sum_45 = (count_1 * 1.5) + (count_2 * 3) + (count_3 * 1) + month;

		cout << sum_45;
	}
}