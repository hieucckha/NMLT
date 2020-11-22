#include "function.h"

#include "math.h"
/**
 * returnLengthNumber
 * * Caculate the length of a number
 * * Example: 12345 - 5
*/
int returnLengthNumber(int inputNumber) {
    int length = 0;
    while (inputNumber != 0) {
        ++length;
        inputNumber /= 10;
    }
    return length;
}

/**
 * reverseNumber
 * * Reverse order of digits in numbers uisng math
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
 * checkPalindromNumber
 * * Check if number is Palindrome, using compare with reverse that number
 * * Example: 12345 - 54321 is right  
*/
bool checkPalindromNumber(int inputNumber) {
    if (inputNumber == reverseNumber(inputNumber)) {
        return true;
    } else {
        return false;
    }
}

/**
 * *numberToArray
 * * Return a dynamic array which store digit of the number
 * @param: inputNumber: input a number, return: a pointer points to array
*/
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

/**
 * checkPalindromNumber
 * * Check if number is Palindrome, using compare with the pair of digit
 * * Example: 123321 - 1|1, 2|2, 3|3
 * @param: *inputArray: pointer points to array which store digit of inputNumber, lengthOfArray: length of number 
*/
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

/**
 * checkClosePalindrom
 * * Check input number is close to palindrom number and condition from user input
 * * Example: 123321 | (1)2332(1) is one pair | 1(2)33(2)1 is one pair | 12(3)(3)21 is one pair
 * @param: inputNumber: , closePair: the number pair can difference
 */
bool checkClosePalindrom(int inputNumber, int closePair) {
    int count = 0, length = 0;

    length = returnLengthNumber(inputNumber);
    for (int i = 0; i < (length / 2); ++i) {
        //                    -> 1|23321                                         12332|1 <-
        if ((inputNumber / (int)pow(10, returnLengthNumber(inputNumber) - 1)) != (inputNumber % 10)) {
            count++;
        }
        if (count > closePair) {
            return false;
        }
        // 123321 -> 23321
        inputNumber -= ((inputNumber / (int)pow(10, returnLengthNumber(inputNumber) - 1)) * pow(10, returnLengthNumber(inputNumber) - 1));
        // 23321 -> 23332
        inputNumber /= 10;
    }
    return true;
}

/** 
 * checkIsLarger
 * * Check if digit of number bigger and bigger
 * * Example: 12345 - 1 | 54321 - 0 
*/
bool checkIsLarger(int inputNumber) {
    int tempNumber;
    tempNumber = reverseNumber(inputNumber);

    int prev = tempNumber % 10;
    tempNumber /= 10;
    int now = tempNumber % 10;

    for (int i = 0; i < (returnLengthNumber(inputNumber) - 1); ++i) {
        if (now < prev) {
            return false;
        }
        prev = now;
        tempNumber /= 10;
        now = tempNumber % 10;
    }
    return true;
}

/** 
 * checkIsLarger
 * * Check if digit of number smaller and smaller
 * * Example: 12345 - 0 | 54321 - 1 
*/
bool checkIsSmaller(int inputNumber) {
    int tempNumber;
    tempNumber = reverseNumber(inputNumber);

    int prev = tempNumber % 10;
    int now = 0;
    tempNumber /= 10;

    for (int i = 0; i < returnLengthNumber(inputNumber); ++i) {
        now = tempNumber % 10;
        if (now > prev) {
            return false;
        }
    }
    return true;
}

/**
 * returnMax
 * * Find the biggest in number
*/
int returnMax(int inputNumber) {
    int max = 0;
    while (inputNumber != 0) {
        if ((inputNumber % 10) > max) {
            max = inputNumber % 10;
        }
        inputNumber /= 10;
    }
    return max;
}

/**
 * returnMax
 * * Find the smallest in number
*/
int returnMin(int inputNumber) {
    int min;
    while (inputNumber != 0) {
        if ((inputNumber % 10) < min) {
            min = inputNumber % 10;
        }
        inputNumber /= 10;
    }
    return min;
}
