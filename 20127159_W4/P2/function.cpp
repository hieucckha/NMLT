#include "function.h"

#include <iostream>

#include "math.h"

int getLengthNumber(int inputNumber) {
    int length = 0;
    while (inputNumber != 0) {
        ++length;
        inputNumber /= 10;
    }
    return length;
}

bool checkAmstrong(int inputNumber) {
    bool flag = false;
    int tempNumber;
    int sum = 0, length = 0;

    // Length of the number
    length = getLengthNumber(tempNumber);

    // Check is that number is Amstrong
    tempNumber = inputNumber;
    while (tempNumber != 0) {
        sum += (pow((tempNumber % 10), length));
        tempNumber /= 10;
    }
    if (sum == inputNumber) {
        flag = true;
    }
    return flag;
}

void printAmstrong(int inputNumber, int length) {
    for (int i = 0; i < pow(inputNumber, length); ++i) {
        if (checkAmstrong(i) == 1) {
            std::cout << i << " ";
        }
    }
}