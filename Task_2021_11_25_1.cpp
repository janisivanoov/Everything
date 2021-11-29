#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
	int dice1Roll, dice2Roll, key, total = 0;
	bool won = false, playing = true;

	srand(time(0));
	cout << "Let's play crabs!" << endl;
	cout << "Enter 'y' to roll or any other symbol to exit" << endl;

	char c;
	cin >> c;

	if (c == 'y') {
		dice1Roll = rand() % 6 + 1;
		dice2Roll = rand() % 6 + 1;
		total = dice1Roll + dice2Roll;
		cout << "You rolled \n" << total;

		if (total == 7 || total == 11)
			won = true;
		else
			if (total == 2 || total == 3 || total == 12)
				won = false;
			else
				if (total >= 4 && total <= 6 || total >= 8 && total <= 10) {
					key = total;
					cout << "\n";
					do
					{
						dice1Roll = rand() % 6 + 1;
						dice2Roll = rand() % 6 + 1;
						total = dice1Roll + dice2Roll;
						cout << "You rolled: \n" << total;
						if (total == key) {
							won = false;
							playing = false;
						}
						else
							if (total == 7) {
								won = true;
								playing = false;
							}
					} while (playing);
				}

		if (won)
			cout << "\nYou win!";
		else
			cout << "\nYou Lose :(";
	}
	if (c != 'y') {
		exit(1);
	}
	return 0;
}