#include "sortFunction.h"

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubleSort(int a[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void sortBorder(int a[][100], int __row, int __col) {
    int temp[(100 * 100) - ((__row - 2) * (__col - 2))], length = 0;

    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            if ((row == 0) || (col == 0) || (row == (__row - 1)) || (col == (__col - 1))) {
                temp[length] = a[row][col];
                length++;
            }
        }
    }

    bubleSort(temp, length);
    for (int col = 0; col < __col; ++col) {
        a[0][col] = temp[col];
    }

    for (int row = 1; row < (__row - 1); ++row) {
        for (int col = 0; col < (__col + 1); col += __col) {
            if (col == 0) {
                a[row][col] = temp[length - row];
            } else {
                a[row][col] = temp[__row - 1 + row];
            }
        }
    }

    // ! CHua xong

    for (int col = 0; col < __col; ++col) {
        a[__row - 1][col] = temp[__col + __row - 2 + __col - col];
    }
}