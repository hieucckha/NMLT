#include "calculateFunction.h"

int sumAll(int a[][100], int __row, int __col) {
    int sum = 0;
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            sum += a[row][col];
        }
    }
    return sum;
}

int sumRow(int a[][100], int thatRow, int __col) {
    int sum = 0;
    for (int col = 0; col < __col; ++col) {
        sum += a[thatRow][col];
    }
    return sum;
}

int sumCol(int a[][100], int __row, int thatCol) {
    int sum = 0;
    for (int row = 0; row < __row; ++row) {
        sum += a[row][thatCol];
    }
    return sum;
}

int sumPriDiago(int a[][100], int __row, int __col) {
    int sum = 0;
    for (int col = 0; col < __col; ++col) {
        sum += a[col][col];
    }
    return sum;
}

int sumSecDiago(int a[][100], int __row, int __col) {
    int sum = 0;
    for (int col = 0; col < __col; ++col) {
        sum += a[__col - 1 - col][col];
    }
    return sum;
}

