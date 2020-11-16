#include <iostream>

#include "function.h"
#include "math.h"

using namespace std;

int main() {
    int inputNumber;
    int length = 0;

    cout << "Input number: ";
    cin >> inputNumber;

    // Length of the number
    length = getLengthNumber(inputNumber);

    if (checkAmstrong(inputNumber) == true) {
        cout << inputNumber << " is an Amstrong number" << endl;
        cout << "List Amstrong number small than x^n (n is the length of number): ";

        // Print number
        printAmstrong(inputNumber, length);
        cout << endl;
    } else {
        cout << inputNumber << " isn't an Amstrong number" << endl;
    }
    return 0;
}
