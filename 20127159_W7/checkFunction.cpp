#include "checkFunction.h"

#include "calculateFunction.h"
#include "findFunction.h"


bool isMagicSquare(int a[][100], int __row, int __col) {
    int sum = 0;

    // Check sum of diagonal of matrix 
    if (sumPriDiago(a, __row, __col) != sumSecDiago(a, __row, __col)) {
        return false;
    }

    sum = sumPriDiago(a, __row, __col);

    // Check sum of row
    for (int row = 0; row < __row; ++row) {
        if (sumRow(a, row, __col) != sum) {
            return false;
        }
    }

    // Check sum of column
    for (int col = 0; col < __col; ++col) {
        if (sumCol(a, __row, col) != sum) {
            return false;
        }
    }
    return true;
}

bool isSaddlePoint(int a[][100], int __row, int __col, int posRow, int posCol) {
    int posMaxRow, posMaxCol, max;
    int posMinRow, posMinCol, min;

    // Find the max in Row
    max = findMaxRow(a, posRow, __col, posMaxRow, posMaxCol);
    
    // Find the min in Column
    min = findMinCol(a, __row, posCol, posMinRow, posMinCol);

    // If value and position is not equal return false
    if ((min == max) && (posMinRow == posMaxRow) && (posMinCol == posMaxCol)) {
        posRow = posMaxRow;
        posCol = posMaxCol;
        return true;
    }

    return false;
}