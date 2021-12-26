#include <iostream>

using namespace std;

int main()
{
	for (int i = 100; i <= 1000; i++) {
		if (i % 5 == 0 && i % 6 == 0)
			cout << i;
		if (i != 100 && (i - 100) % 300 == 0)
			cout << "";
	}

	return 0;
}