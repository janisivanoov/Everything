#include <iostream>

using namespace std;

int getPentagonalNumber(int);

int main()
{
	cout << "The first 100 pentagonal number are:" << endl;;
	for (int i = 1; i < 101; i++) {
		int num = getPentagonalNumber(i);
		cout << num << endl;
	}
}
int getPentagonalNumber(int n)
{
	return n * (3 * n - 1) / 2;
}