#include <iostream>

#include "function.h"
using namespace std;

int main() {
    int inputNumber = 0;
    cout << "Input Number: ";
    cin >> inputNumber;

    cout << "Square of each number: ";
    printSquare(inputNumber);

    return 0;
}