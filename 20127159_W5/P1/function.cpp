#include "function.h"

#include <iostream>

#include "math.h"
bool checkPrimaryNumber(int inputNumber) {
    if ((inputNumber == 0) || (inputNumber == 1)) {
        return false;
    }
    for (int i = 2; i <= sqrt(inputNumber); ++i) {
        if (inputNumber % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimaryNumber(int inputNumber) {
    for (int i = 0; i <= inputNumber; ++i) {
        if (checkPrimaryNumber(i) == true) {
            std::cout << i << " ";
        }
    }
}

void printPrimaryOfNumber(int inputNumber) {
    int tempNumber = inputNumber;
    int count;

    if (inputNumber < 0) {
        std::cout << "None";
    }

    if (inputNumber == 0) {
        std::cout << "0";
    }

    if (inputNumber == 1) {
        std::cout << "1";
    }

    for (int i = 2; i <= (inputNumber / 2); i++) {
        count = 0;
        while (tempNumber % i == 0) {
            ++count;
            tempNumber /= i;
        }
        if (count) {
            std::cout << i;
            if (count > 1) {
                std::cout << "^" << count;
            }
            if (tempNumber > i) {
                std::cout << " * ";
            }
        }
    }
}

void printEachCharaterR2L(int inputNumber) {
    while (inputNumber != 0) {
        std::cout << (inputNumber % 10) << " ";
        inputNumber /= 10;
    }
    std::cout << std::endl;
}

int reverseNumber(int inputNumber) {
    int tempNumber = 0;
    while (inputNumber != 0) {
        tempNumber = (tempNumber * 10) + (inputNumber % 10);
        inputNumber /= 10;
    }
    return tempNumber;
}

void printEachCharaterL2R(int inputNumber) {
    inputNumber = reverseNumber(inputNumber);
    while (inputNumber != 0) {
        std::cout << (inputNumber % 10) << " ";
        inputNumber /= 10;
    }
    std::cout << std::endl;
}

int sumOfEachCharaterNumber(int inputNumber) {
	int resualt = 0;

	while (inputNumber != 0) {
		resualt += inputNumber % 10;
		inputNumber /= 10;
	}

	return resualt;
}

int sumOfEachCharaterNumberLower10(int inputNumber) {
	int resualt = 0;
	resualt = sumOfEachCharaterNumber(inputNumber);
	while (resualt >= 10) {
		resualt = sumOfEachCharaterNumber(resualt);
	}

	return resualt;
}