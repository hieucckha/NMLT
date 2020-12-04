#include "ioFunction.h"

#include <iostream>

#include "calculateFunction.h"
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
    cout << "The matrix is:" << '\n';
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            cout << "[" << a[row][col] << "] ";
        }
        cout << '\n';
    }
}

bool printBigerSum(int a[][100], int __row, int __col) {
    int count = 0;

    cout << "All element in matrix biger than sum is: ";

    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            if (a[row][col] > sumAll(a, __row, __col)) {
                count++;
                cout << '\n' << "a[" << row << "][" << col << "]: " << a[row][col];
            }
        }
    }
    if (count == 0) {
        cout << "None";
        return false;
    }
    return true;
}