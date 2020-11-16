#include <math.h>

#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int inputNumber;
    cout << "Input number (number > 0): ";
    cin >> inputNumber;

    while (inputNumber < 0) {
        cout << "Reinput number (number > 0): ";
        cin >> inputNumber;
    }

    /* a) */
    if (checkPalindrom(inputNumber) != true) {
        cout << "Number " << inputNumber << " isn't a Palindrom number" << endl;
        /* c) */
        cout << "Another Palindrom number is: ";
        cout << returnPalidrom(inputNumber) << endl;
    } else {
        cout << "Number " << inputNumber << " is a Palindrom number" << endl;
    }
    /* b) */
    cout << "Palindrom number between 10 and 100 is: ";
    printAllPalidrom();

    return 0;
}
