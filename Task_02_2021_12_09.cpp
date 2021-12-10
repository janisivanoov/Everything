#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <random>

using namespace std;

const string upper_case_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string lower_case_string = "abcdefghijklmnopqrstuvwxyz";
const string digit = "0123456789";
const string special_characters = "$*^&#_?";
const string password = upper_case_string + lower_case_string + digit + special_characters;

int main()
{
	system("chcp 1251 > null");

	string pass;
	string result;
	srand(time(0));

	result = result +
		upper_case_string[rand() % upper_case_string.size()] +
		digit[rand() % digit.size()] +
		special_characters[rand() % special_characters.size()];

	while (result.size() < 8)
		result += password[rand()
		% password.size()];

	random_shuffle(result.begin(), result.end());

	cout << "Password " << result;

	system("pause > null");

	return 0;
}