#include "findFunction.h"

#define INT32_MAX (2147483647)
#define INT32_MIN (-2147483646)

bool findX(int a[][100], int __row, int __col, int x, int &posRow, int &posCol) {
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            if (x == a[row][col]) {
                posRow = row;
                posCol = col;
                return true;
            }
        }
    }
    return false;
}

int findMaxArray(int a[], int length, int &pos) {
    int max = INT32_MIN;
    for (int i = 0; i < length; ++i) {
        if (a[i] > max) {
            max = a[i];
            pos = i;
        }
    }
    return max;
}

int findMaxMatrix(int a[][100], int __row, int __col, int &posRow, int &posCol) {
    int max = INT32_MIN;
    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {
            if (a[row][col] > max) {
                max = a[row][col];
                posRow = row;
                posCol = col;
            }
        }
    }
    return max;
}

int findMaxBorder(int a[][100], int __row, int __col, int &posRow, int &posCol) {
    int max = INT32_MIN;
    for (int col = 0; col < __col; ++col) {
        if (a[0][col] > max) {
            max = a[0][col];
            posRow = 0;
            posCol = col;
        }
    }

    for (int row = 1; row < (__row - 1); ++row) {
        for (int col = 0; col != __col; col = __col) {
            if (a[row][col] > max) {
                max = a[row][col];
                posRow = row;
                posCol = col;
            }
        }
    }

    for (int col = 0; col < __col; ++col) {
        if (a[__row - 1][col] > max) {
            max = a[__row - 1][col];
            posRow = (__row - 1);
            posCol = col;
        }
    }
    return max;
}

bool findMaxInside(int a[][100], int __row, int __col, int &posRow, int &posCol) {
    if (__row <= 2 && __col <= 2) {
        return false;
    }

    int max = INT32_MIN;

    for (int row = 1; row < (__row - 1); ++row) {
        for (int col = 1; col < (__col - 1); ++col) {
            if (a[row][col] > max) {
                max = a[row][col];
                posRow = row;
                posCol = col;
            }
        }
    }
    return true;
}

int findMaxRow(int a[][100], int thatRow, int __col, int &posRow, int &posCol) {
    int max = INT32_MIN;
    for (int col = 0; col < __col; ++col) {
        if (a[thatRow][col] > max) {
            max = a[thatRow][col];
            posRow = thatRow;
            posCol = col;
        }
    }
    return max;
}

int findMinRow(int a[][100], int thatRow, int __col, int &posRow, int &posCol) {
    int min = INT32_MAX;
    for (int col = 0; col < __col; ++col) {
        if (a[thatRow][col] < min) {
            min = a[thatRow][col];
            posRow = thatRow;
            posCol = col;
        }
    }
    return min;
}

int findMaxCol(int a[][100], int __row, int thatCol, int &posRow, int &posCol) {
    int max = INT32_MIN;
    for (int row = 0; row < __row; ++row) {
        if (a[row][thatCol] > max) {
            max = a[row][thatCol];
            posRow = row;
            posCol = thatCol;
        }
    }
    return max;
}

int findMinCol(int a[][100], int __row, int thatCol, int &posRow, int &posCol) {
    int min = INT32_MAX;
    for (int row = 0; row < __row; ++row) {
        if (a[row][thatCol] < min) {
            min = a[row][thatCol];
            posRow = row;
            posCol = thatCol;
        }
    }
    return min;
}

int findMaxPriDiago(int a[][100], int __row, int __col, int posNumRow, int posNumCol, int &posRow, int &posCol) {
    // if ((posNumRow < (0)) || (posNumRow > (__row - 1))) {
    //     return false;
    // }

    // if ((posNumCol < (0)) || (posNumCol > (__col - 1))) {
    //     return false;
    // }

    int rowIndex = posNumRow, colIndex = posNumCol;
    int max = INT32_MIN;

    // ! Shift to the left
    while ((rowIndex >= 0) && (colIndex >= 0)) {
        if (a[rowIndex][colIndex] > max) {
            max = a[rowIndex][colIndex];
            posRow = rowIndex;
            posCol = colIndex;
        }
        rowIndex--;
        colIndex--;
    }

    rowIndex = posNumRow;
    colIndex = posNumCol;
    // ! Shift to the right
    while ((rowIndex <= __row) && (colIndex <= __col)) {
        if (a[rowIndex][colIndex] > max) {
            max = a[rowIndex][colIndex];
            posRow = rowIndex;
            posCol = colIndex;
        }
        rowIndex++;
        colIndex++;
    }

    return max;
}

int findMaxSecDiago(int a[][100], int __row, int __col, int posNumRow, int posNumCol, int &posRow, int &posCol) {
    // if ((posNumRow < (0)) || (posNumRow > (__row - 1))) {
    //     return false;
    // }

    // if ((posNumCol < (0)) || (posNumCol > (__col - 1))) {
    //     return false;
    // }

    int rowIndex = posNumRow, colIndex = posNumCol;
    int max = INT32_MIN;

    // ! Shift to the left
    while ((rowIndex <= __row) && (colIndex >= 0)) {
        if (a[rowIndex][colIndex] > max) {
            max = a[rowIndex][colIndex];
            posRow = rowIndex;
            posCol = colIndex;
        }
        rowIndex++;
        colIndex--;
    }

    rowIndex = posNumRow;
    colIndex = posNumCol;
    // ! Shift to the right
    while ((rowIndex >= 0) && (colIndex <= __col)) {
        if (a[rowIndex][colIndex] > max) {
            max = a[rowIndex][colIndex];
            posRow = rowIndex;
            posCol = colIndex;
        }
        rowIndex--;
        colIndex++;
    }
    return max;
}