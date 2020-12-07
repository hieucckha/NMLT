// ! cd $dir && g++ -o $fileNameWithoutExt *.cpp && ./$fileNameWithoutExt
#include <iostream>

#include "calculateFunction.h"
#include "checkFunction.h"
#include "countFunction.h"
#include "findFunction.h"
#include "ioFunction.h"
#include "sortFunction.h"
using namespace std;

int main() {
    // Init 2D array with 100 x 100 element
    // Capacity is 100 x 100
    int a[100][100];
    int __row = 0, __col = 0;
    int choose = 0;

    cout << "--Importing your 2D matrix--\n";
    inputMatrix(a, __row, __col);
    cout << "--The matrix is--\n";
    outputMatrix(a, __row, __col);

    cout << '\n'
         << '\n';

    cout << "--What do you want to do with matrix--\n";
    cout << "1. Find X in matrix." << endl;
    cout << "2. Find the largest element in the matrix and on the matrix boundary." << endl;
    cout << "3. Sum the elements in the matrix and identify those whose values are greater than this sum." << endl;
    cout << "4. Sum the rows & columns in the matrix, indicating which row / column maximum value belongs." << endl;
    cout << "5. Check if a matrix is a magic square." << endl;
    cout << "6. Show the \"saddle\" positions on the matrix. (largest on row and smallest on column)." << endl;
    cout << "7. Count the number of \"queens\" on the matrix. (largest on row, column and 2 diagonal lines passing through it)." << endl;
    cout << "8. Arrange the values on the matrix edge in increasing clockwise direction." << endl;
    cout << "Your choose (1->8): ";
    cin >> choose;
    while ((choose <= 0) || (choose >= 9)) {
        cout << "Your choose is wrong, reinput: ";
        cin >> choose;
    }

    cout << '\n'
         << '\n';

    switch (choose) {
        // 1. Find X in matrix
        case 1: {
            int x = 0, posRow = 0, posCol = 0;
            cout << "Input x: ";
            cin >> x;
            findX(a, __row, __col, x, posRow, posCol);
            if (findX(a, __row, __col, x, posRow, posCol) != true) {
                cout << "X not exist in matrix you import";
            } else {
                cout << "X exist in matrix your import\n";
                cout << "Position in matrix: \n";
                cout << "Row: " << posRow << '\n';
                cout << "Column: " << posCol << '\n';
            }
        } break;
        // 2. Find the largest element and border
        case 2: {
            int x = 0, posRow = 0, posCol = 0;
            cout << "Max in matrix is: \n";

            cout << "Value is: " << findMaxMatrix(a, __row, __col, posRow, posCol) << endl;
            cout << "At row: " << posRow << endl;
            cout << "At column: " << posCol << endl;

            cout << '\n';

            cout << "Max in border of matrix is: \n";
            cout << "Value is: " << findMaxBorder(a, __row, __col, posRow, posCol) << endl;
            cout << "At row: " << posRow << endl;
            cout << "At column: " << posCol << endl;
        } break;
        // 3. Sum matrix and identify those whose values are greater than this sum
        case 3: {
            int sum = 0;
            sum = sumAll(a, __row, __col);
            cout << "Sum of all element in matrix is: " << sum << endl;

            cout << '\n';

            printBigerSum(a, __row, __col);
        } break;
        // 4. Sum each rows & columns , max of row / column
        case 4: {
            cout << "Sum of each row is: " << endl;
            for (int row = 0; row < __row; ++row) {
                cout << "Row " << row << " is: " << sumRow(a, row, __col) << endl;
            }

            cout << '\n';

            cout << "Sum of each column is: " << endl;
            for (int col = 0; col < __col; ++col) {
                cout << "Row " << col << " is: " << sumCol(a, __row, col) << endl;
            }

            printMaxRCInMatrix(a, __row, __col);
        } break;
        // 5. Check if a matrix is a magic square
        case 5: {
            cout << "The matrix is " << (isMagicSquare(a, __row, __col) == true ? "a " : "not ") << "magic square" << endl;
        } break;
        // 6. Show the "saddle" positions on the matrix
        case 6: {
            printSaddlePoint(a, __row, __col);
        } break;
        // 7. Count the number of \"queens\" on the matrix
        case 7: {
            cout << "The number of \"queen\" in matrix is: " << countQueenNum(a, __row, __col) << endl;
        } break;
        // 8. Arrange the values on the matrix edge in increasing clockwise direction
        default: {
            cout << "The array before sort of border: \n";
            outputMatrix(a, __col, __row);

            cout << '\n';

            sortBorder(a, __row, __col);
            cout << "The array after sort of border: \n";
            outputMatrix(a, __row, __col);
        } break;
    }
    return 0;
}
