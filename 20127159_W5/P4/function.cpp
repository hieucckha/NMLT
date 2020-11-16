#include "function.h"

int returnLengthNumber(int inputNumber) {
    int length = 0;
    while (inputNumber != 0) {
        ++length;
        inputNumber /= 10;
    }
    return length;
}

int reverseNumber(int inputNumber) {
    int tempNumber = 0;
    while (inputNumber != 0) {
        tempNumber = (tempNumber * 10) + (inputNumber % 10);
        inputNumber /= 10;
    }
    return tempNumber;
}

// Using math
bool checkPalindromNumber(int inputNumber) {
    if (inputNumber == reverseNumber(inputNumber)) {
        return true;
    } else {
        return false;
    }
}

int *numberToArray(int inputNumber) {
    int length = returnLengthNumber(inputNumber);
    int *ptrInt = new int[length];
    inputNumber = reverseNumber(inputNumber);
    for (int i = 0; i < length; ++i) {
        ptrInt[i] = inputNumber % 10;
        inputNumber /= 10;
    }
    return ptrInt;
}

// Using array
bool checkPalindromNumber(int *inputArray, int lengthOfArray) {
    // Length is even
    if (lengthOfArray % 2 == 0) {
        for (int i = 0; i < (lengthOfArray / 2); ++i) {
            if (inputArray[i] != inputArray[(lengthOfArray - i)]) {
                return false;
            }
        }
        return true;
    }
    // Length is odd
    else {
        for (int i = 0; i < (lengthOfArray / 2); ++i) {
            if (inputArray[i] != inputArray[(lengthOfArray - i)]) {
                return false;
            }
            return true;
        }
    }
}

/* 
? Check if each charater of number is equal
! 123321 = 1
! Fix the bellow function
*/
bool checkIsLarger(int inputNumber) {
    inputNumber = reverseNumber(inputNumber);

    int prev = inputNumber % 10;
    inputNumber /= 10;
	int now = inputNumber % 10;
    
	for (int i = 0; i < (returnLengthNumber(inputNumber) - 1); ++i) {
        if (now < prev) {
            return false;
        }
		prev = now;
		inputNumber /= 10;
		now = inputNumber % 10;
	}
    return true;
}

// ? Check if each charater of number is equal
bool checkIsSmaller(int inputNumber) {
    inputNumber = reverseNumber(inputNumber);
    int prev = inputNumber % 10;
    int now = 0;
    inputNumber /= 10;
    for (int i = 0; i < returnLengthNumber(inputNumber); ++i) {
        now = inputNumber % 10;
        if (now > prev) {
            return false;
        }
    }
    return true;
}

int returnMax(int inputNumber) {
    int max = 0;
    while (inputNumber != 0) {
        if ((inputNumber % 10) > max) {
            max = inputNumber % 10;
        }
        inputNumber /= 10;
    }
}
int returnMin(int inputNumber) {
    int min = 0;
    while (inputNumber != 0) {
        if ((inputNumber % 10) < min) {
            min = inputNumber % 10;
        }
        inputNumber /= 10;
    }
}