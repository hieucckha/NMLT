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
    // Init a array has capacity is border
    int temp[(100 * 100) - ((100 - 2) * (100 - 2))], length = 0;

    // Append border element to temp
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            if ((row == 0) || (col == 0) || (row == (__row - 1)) || (col == (__col - 1))) {
                temp[length] = a[row][col];
                length++;
            }
        }
    }

    // Sort array has border element
    bubleSort(temp, length);

    // Change the top of matrix
    for (int col = 0; col < __col; ++col) {
        a[0][col] = temp[col];
    }

    // Change the side of matrix
    for (int row = 1; row < (__row - 1); ++row) {
        for (int col = 0; col < __col; col += (__col - 1)) {
            if (col == 0) {
                a[row][col] = temp[length - row];
            } else {
                a[row][col] = temp[__col + row - 1];
            }
        }
    }

    // Change the bottom of matrix
    for (int col = 0; col < __col; ++col) {
        a[__row - 1][col] = temp[__col + __row - 2 + __col - 1 - col];
    }
}