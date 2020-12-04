#include "checkFunction.h"

#include <iostream>

#include "calculateFunction.h"
bool isMagicSquare(int a[][100], int __row, int __col) {
    int sum = 0;

    if (sumPriDiago(a, __row, __col) != sumSecDiago(a, __row, __col)) {
        std::cout << "Break Diago\n";
        return false;
    }

    sum = sumPriDiago(a, __row, __col);

    for (int row = 0; row < __row; ++row) {
        if (sumRow(a, row, __col) != sum) {
            std::cout << "Break Row\n";
            return false;
        }
    }

    for (int col = 0; col < __col; ++col) {
        if (sumCol(a, __row, col) != sum) {
            std::cout << col << " " << __row << '\n';
            std::cout << sumCol(a, __row, col) << '\n';
            std::cout << "Break Col\n";
            return false;
        }
    }
    return true;
}