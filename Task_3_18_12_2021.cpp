#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		double pi = 4 * (1 - (1 / 3) + (1 / 5) - (1 / 7) + (1 / 9) - (1 / 11) +
			(pow((-1), (i + 1))) / ((2 * i) - 1));

		if (i % 10000 == 0)
		{
			cout << pi << endl;
		}
	}
}