#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

void readArray(int arr[]){
    int numberTimes;

    cout << "Enter an amount numbers in array: \n";
    cin >> numberTimes;

    cout << "Enter a numbers to store in array: \n";

    for (int i = 0; i < numberTimes; ++i) {
        cin >> arr[i];
    }
}

void sum(int arr1[]) {
    int numberTimes;

    cout << "Enter an amount numbers in array: \n";
    cin >> numberTimes;

    cout << "Enter a number to store in array: \n";

    for (int i = 0; i < numberTimes; ++i) {
        cin >> arr1[i];
    }
}

void equal(int A[], int B[], int lenA, int lenB) {
    string messageWrong = "Not equal";
    string messageRight = "Equal";

    if (lenA != lenB) {
        cout << messageWrong << endl;
    }

    sort(A, A + lenA);
    sort(B, B + lenB);

    for (int i = 0; i < lenA; i++) {
        if (A[i] != B[i]) {
            cout << messageWrong << endl;
        }
    }
    cout << messageRight << endl;
}

int main()
{
    srand(time(0));

    int nums[10][5], nums1[10][5], nums2[10][5];

    //i
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> nums[i][j];
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> nums1[i][j];
        }
    }

    //ii
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            nums2[i][j] = nums1[i][j] + nums[i][j];
        }
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << nums2[i][j] << endl;
        }
    }


    int numR1 = rand() % 10, numR2 = rand() % 5;

    //iii
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (nums[i][j] == nums[numR1][numR2]) {
                cout << "Row " << i << " is the same as row " << numR1 << endl;
            }
            else {
                cout << "Row " << i << " isn't the same as row " << numR1 << endl;
            }
        }
    }
}