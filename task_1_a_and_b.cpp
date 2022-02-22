#include <iostream>
#include <iomanip>

using namespace std;


int CountTheElements(int arr[100][100], int n, int k)
{
    int counter = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] % k == 0) {
                counter++;
            }
        }
    }

    return counter;
}

int main() {
    int num[100][100], sum = 0, s = 0, s1 = 0, s2 = 0, s3 = 0, 
        s4 = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0,
        sumDi1 = 0, sumDi2 = 0, guessNum = 0, guessRow = 0, counter = 0;

    //draw
    for (int i = 0; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            num[i][j] = i * j;
        }
    }
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << " " << num[i][j];
        }
        cout << endl;
    }
    
    //sum
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            sum += num[i][j];
        }
    }
    cout << sum << endl;;

    //lookup for divisible
    int n = sizeof(num) / sizeof(num[0][0]);
    cout << CountTheElements(num, n, 3) << "\n";

    //check digit
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (num[i][j] % 10 == 4) {
                counter++;
            }
        }
    }
    cout << counter;

    //sum row 6
    for (int i = 0; i < 10; i++) {
        s += num[i][6];
    }
    cout << "\n" << s;

    //each colums sum
    for (int i = 0; i < 10; i++) {
        s1 += num[i][1];
    }
    cout << "\nSum in column 1" << s1;

    for (int i = 0; i < 10; i++) {
        s2 += num[i][2];
    }
    cout << "\nSum in column 2" << s2;

    for (int i = 0; i < 10; i++) {
        s3 += num[i][3];
    }
    cout << "\nSum in column 3" << s3;

    for (int i = 0; i < 10; i++) {
        s4 += num[i][4];
    }
    cout << "\nSum in column 4" << s4;

    for (int i = 0; i < 10; i++) {
        s5 += num[i][5];
    }
    cout << "\nSum in column 5" << s5;

    for (int i = 0; i < 10; i++) {
        s6 += num[i][6];
    }
    cout << "\nSum in column 6" << s6;

    for (int i = 0; i < 10; i++) {
        s7 += num[i][7];
    }
    cout << "\nSum in column 7" << s7;

    for (int i = 0; i < 10; i++) {
        s8 += num[i][8];
    }
    cout << "\nSum in column 8" << s8;

    for (int i = 0; i < 10; i++) {
        s9 += num[i][9];
    }
    cout << "\nSum in column 9" << s9;

    //sum first diagonal
    sumDi1 = num[1][10] + num[2][9] + num[3][8] + num[4][7] + num[5][6] + num[6][5] + num [7][4] + num[8][3] + num[9][2] + num[10][1];
    cout << "\n" << sumDi1;

    //sum second diagonal
    sumDi2 = num[1][1] + num[2][2] + num[3][3] + num[4][4] + num[5][5] + num[6][6] + num[7][7] + num[8][8] + num[9][9] + num[10][10];
    cout << "\n" << sumDi2;

    //ask user
    cout << "\nEnter the row number: ";
    cin >> guessRow;
    cout << "\nEnter the number: ";
    cin >> guessNum;
    for (int i = 0; i <= 10; i++) {
        if (num[i][guessRow] == guessNum) {
            cout << "Finded the looking number!" << endl;
        }
    }
    return 0;
}