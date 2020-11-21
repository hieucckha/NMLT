#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int inputNumber;
    cout << "Input number: ";
    cin >> inputNumber;

    // a.
    cout << inputNumber << " is a primary number: " << ((checkPrimaryNumber(inputNumber) == true) ? "True" : "False") << endl;

    // b.
    cout << "All primary number < " << inputNumber << " is:";
    printPrimaryNumber(inputNumber);
    cout << endl;

    // c.
    cout << "Primary factor of " << inputNumber << " is: ";
    printPrimeFactor(inputNumber);
    cout << endl;

    // d.
    cout << "Each digit of number from right to left is: ";
    printEachCharaterR2L(inputNumber);
    cout << endl;

    // e.
    cout << "Each digit of number from left to right is: ";
    printEachCharaterL2R(inputNumber);
    cout << endl;

    // f.
    cout << "Sum of each digit of number until smaller than 10 is: " << sumOfEachCharaterNumberLower10(inputNumber) << endl;
    return 0;
}