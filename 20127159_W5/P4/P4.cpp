#include <iostream>

#include "function.h"
using namespace std;

int main() {
    int inputNumber = 0;
    cout << "Input number (n > 0): ";
    cin >> inputNumber;
    if (checkPalindromNumber(inputNumber) == 1) {
        cout << "The number is palindrom" << endl;
        cout << "Are the digits sorted in ascending order: " << (checkIsLarger(inputNumber) == 1 ? "True" : "False") << endl;
        cout << "Are the digits sorted in descending order: " << (checkIsLarger(inputNumber) == 1 ? "True" : "False") << endl;
        cout << "The largest digit is: " << returnMax(inputNumber) << endl;
        cout << "The smallest digit is: " << returnMin(inputNumber) << endl;
    } else {
        cout << "The number isn't palindrom" << endl;
        cout << "Is the number nearly symmetrical (one pair is not symmetrical): " << (checkClosePalindrom(inputNumber) == 1 ? "True" : "False") << endl;
        cout << "Are the digits sorted in ascending order: " << (checkIsLarger(inputNumber) == 1 ? "True" : "False") << endl;
        cout << "Are the digits sorted in descending order: " << (checkIsLarger(inputNumber) == 1 ? "True" : "False") << endl;
        cout << "The largest digit is: " << returnMax(inputNumber) << endl;
        cout << "The smallest digit is: " << returnMin(inputNumber) << endl;
    }
    return 0;
}
