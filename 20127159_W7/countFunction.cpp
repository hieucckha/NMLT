#include "countFunction.h"

#include "findFunction.h"

int countQueenNum(int a[][100], int __row, int __col) {
    int count = 0;

    int posRow1 = 0, posCol1 = 0;
    int posRow2 = 0, posCol2 = 0;
    int posRow3 = 0, posCol3 = 0;
    int posRow4 = 0, posCol4 = 0;

    int resualt1 = 0, resualt2 = 0, resualt3 = 0, resualt4 = 0;

    for (int row = 0; row < __row; ++row) {
        for (int col = 0; col < __col; ++col) {

            // Compare the value and postion of row and postion of col
            resualt1 = findMaxRow(a, row, __col, posRow1, posCol1);
            resualt2 = findMaxCol(a, __row, col, posRow2, posCol2);
            resualt3 = findMaxPriDiago(a, __row, __col, row, col, posRow3, posCol3);
            resualt4 = findMaxSecDiago(a, __row, __col, row, col, posRow4, posCol4);

            // Compare vaule and position of row, column, diagonal
            if ((resualt1 == resualt2) && (resualt2 == resualt3) && (resualt3 == resualt4)) {
                if (posRow1 == posRow2 == posRow3 == posRow4) {
                    if (posCol1 == posCol2 == posCol3 == posCol4) {
                        count++;
                    }
                }
            }
        }
    }
    
    return count;
}