#include "function.h"

#include <iostream>

#include "math.h"

/**
 * checkPrimaryNumber
 * * Checking a number if it is a primary number
 */  
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

/**
 * printPrimaryNumber
 * * Print all primary number < inputNumber
 */ 
void printPrimaryNumber(int inputNumber) {
    for (int i = 0; i <= inputNumber; ++i) {
        if (checkPrimaryNumber(i) == true) {
            std::cout << i << " ";
        }
    }
}

/**
 * printPrimeFactor
 * * Print prime factor of number
 */ 
void printPrimeFactor(int inputNumber) {
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

/**
 * printEachCharaterR2L
 * * Print each digit of number from right to left
 * * Example: 12345 - 5 4 3 2 1
 */
void printEachCharaterR2L(int inputNumber) {
    while (inputNumber != 0) {
        std::cout << (inputNumber % 10) << " ";
        inputNumber /= 10;
    }
    std::cout << std::endl;
}

/**
 * reverseNumber
 * * Reverse the digit of number
 * * Example: 12345 - 54321
 */
int reverseNumber(int inputNumber) {
    int tempNumber = 0;
    while (inputNumber != 0) {
        tempNumber = (tempNumber * 10) + (inputNumber % 10);
        inputNumber /= 10;
    }
    return tempNumber;
}

/**
 * printEachCharaterL2R
 * * Print each digit of number from left to right
 * * Example: 12345 - 1 2 3 4 5
 */
void printEachCharaterL2R(int inputNumber) {
    inputNumber = reverseNumber(inputNumber);
    while (inputNumber != 0) {
        std::cout << (inputNumber % 10) << " ";
        inputNumber /= 10;
    }
    std::cout << std::endl;
}

/**
 * sumOfEachCharaterNumber
 * * Caculate sum of digit in number
 * * Example: 12345 - 15
 */
int sumOfEachCharaterNumber(int inputNumber) {
	int resualt = 0;

	while (inputNumber != 0) {
		resualt += inputNumber % 10;
		inputNumber /= 10;
	}

	return resualt;
}

/**
 * sumOfEachCharaterNumberLower10
 * * Caculate sum of digit in number until sum smaller than 10
 * * Example: 12345 - 15 - 6
 */
int sumOfEachCharaterNumberLower10(int inputNumber) {
	int resualt = 0;
	resualt = sumOfEachCharaterNumber(inputNumber);
	while (resualt >= 10) {
		resualt = sumOfEachCharaterNumber(resualt);
	}

	return resualt;
}