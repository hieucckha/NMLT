#include "function.h"

#include <iostream>

/*
* square
* * Caculate square of a number
*/
int square(int inputNumber) {
    int resualt = 0;
    for (int i = 1; i <= inputNumber; ++i) {
        resualt += inputNumber;
    }
    return resualt;
}

/*
* printSquare
* * Print square of each number using recursion
* * Example: 5 - 5^2 4^2 3^2 2^2 1^2 
*/
int printSquare(int inputNumber) {
    if (inputNumber == 1) {
        std::cout << square(1) << " ";
		return 1;
	}

    std::cout << square(inputNumber) << " ";
    return printSquare(inputNumber - 1);
}