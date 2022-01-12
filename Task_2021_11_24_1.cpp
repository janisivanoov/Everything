#include <iostream>

using namespace std;

void arrow(int, char);

int main()
{
	arrow(5, 'v');

	return 0;
}

void arrow(int a, char symb) {
	switch (symb) {
	case 'v':
		for (int i = 0; i < a; i++) {
			cout << "$" << endl;
		}
		break;
	case 'h':
		for (int i = 0; i < a; i++) {
			cout << "$";
		}
		break;
	}
}