#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	char ch;
	int j;
	double d;
	string str1;
	string str2;
	ifstream infile("text.txt");
	infile >> ch >> j >> d >> str1 >> str2;
	cout << ch << j << d << str1 << str2 << endl;
	system("pause > 0");
	return 0;
}