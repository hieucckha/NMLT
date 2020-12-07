#include "ioFunction.h"

#include "calculateFunction.h"
#include "checkFunction.h"
#include "findFunction.h"
#include "iostream"
using namespace std;

void inputMatrix(int a[][100], int &__row, int &__col) {
    cout << "Input row: ";
    cin >> __row;
    cout << "Input colum: ";
    cin >> __col;

    cout << "Input the vaulue for each element in matrix" << '\n';
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            cout << "a[" << row << "][" << col << "]: ";
            cin >> a[row][col];
        }
    }
}

void outputMatrix(int a[][100], int __row, int __col) {
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            cout << "[" << a[row][col] << "] ";
        }
        cout << '\n';
    }
}

// Question 4
bool printBigerSum(int a[][100], int __row, int __col) {
    int count = 0;

    cout << "The element in matrix biger than sum is: ";

    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            if (a[row][col] > sumAll(a, __row, __col)) {
                count++;
                cout << '\n'
                     << "a[" << row << "][" << col << "]: " << a[row][col];
            }
        }
    }
    if (count == 0) {
        cout << "None";
        return false;
    }
    return true;
}

// Question 5
void printMaxRCInMatrix(int a[][100], int __row, int __col) {
    int temp[__row + __col], length = 0, pos = 0;
    for (int row = 0; row < __row; ++row) {
        temp[length] = sumRow(a, row, __col);
        length++;
    }

    cout << '\n';

    for (int col = 0; col < __col; ++col) {
        temp[length] = sumCol(a, __row, col);
        length++;
    }

    findMaxArray(temp, length, pos);
    cout << "The largest has value is: " << findMaxArray(temp, length, pos) << endl;
    cout << "At " << ((pos <= (__row - 1)) ? (" row: ") : (" column: "));
    cout << ((pos <= (__row - 1)) ? (pos) : (pos - __row));
    cout << endl;
}

// Question 7
void printSaddlePoint(int a[][100], int __row, int __col) {
    int count = 0;
    cout << "The saddle point is: ";
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            if (isSaddlePoint(a, __row, __col, row, col) == true) {
                count++;
                cout << '\n'
                     << "a[" << row << "][" << col << "]: " << a[row][col];
            }
        }
    }
    if (count == 0) {
        cout << "None" << '\n';
    }
}