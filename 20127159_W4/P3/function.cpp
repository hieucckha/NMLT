#include "function.h"

#include <math.h>

#include <iostream>

int reverseNumber(int inputNumber) {
    int resualt = 0;
    int tempNumber = inputNumber;

    while (tempNumber != 0) {
        resualt = (resualt * 10) + (tempNumber % 10);
        tempNumber /= 10;
    }

    return resualt;
}

bool checkPalindrom(int inputNumber) {
    bool flag = false;

    int tempNumber = reverseNumber(inputNumber);
    if (tempNumber == inputNumber) {
        flag = true;
    }

    return flag;
}

void printAllPalidrom() {
    for (int i = 11; i < 100; ++i) {
        if ((checkPalindrom(i) == true) && (checkPalindrom(pow(i, 2)) == true)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int returnPalidrom(int inputNumber) {
    int tempNumber = inputNumber;
    int resualt = 0;

    while (checkPalindrom(tempNumber) != true) {
        tempNumber += reverseNumber(tempNumber);
    }

    resualt = tempNumber;
    return resualt;
}