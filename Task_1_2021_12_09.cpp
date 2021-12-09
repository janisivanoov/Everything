#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	system("chcp 1251 > null");

	const char* const special_characters{ "$*^&#_?" };
	bool good;
	string pass;

	do
	{
		cout << "Enter a strong password: ";
		cin >> pass;

		if ((good = pass.size() >= 8 && pass.size() <= 32))
		{
			size_t upper_case_letter{};
			size_t digit{};
			size_t special_character_check{};

			for (char ch : pass)
			{
				upper_case_letter += (ch >= 'A' && ch <= 'Z');
				digit += (ch >= '0' && ch <= '9');
				special_character_check += strchr(special_characters, ch) != NULL;
			}

			good &= upper_case_letter && digit && special_character_check;
		}
	} while (cout << (good ? "Password OK\n" : "Bad password\n") && !good);

	system("pause > null");

	return 0;
}