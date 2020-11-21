#ifndef _FUNCTION_H
#define _FUNCTION_H

//* * Caculate the length of a number
int returnLengthNumber(int inputNumber);

//* * Reverse order of digits in numbers using math
int reverseNumber(int inputNumber);

//* * Check if number is Palindrome, using compare with reverse that number
bool checkPalindromNumber(int inputNumber);

//* * Return a dynamic array which store digit of the number
int *numberToArray(int inputNumber);

//* * Check if number is Palindrome, using compare with the pair of digit
bool checkPalindromNumber(int *inputArray, int lengthOfArray);

//* * Check if digit of number bigger and bigger
bool checkIsLarger(int);

//* * Check if digit of number smaller and smaller
bool checkIsSmaller(int);

//* * Find the biggest in number
int returnMax(int);

//* * Find the smallest in number
int returnMin(int);

#endif  // _FUNCTION_H