#include "function.h"

/*
* returnFinbonacci
* * Return Finbonacci using recursion
*/
int returnFibonacci(int inputNumber = 0) {
    if (inputNumber <= 1) {
        return inputNumber;
    }
    return (returnFibonacci(inputNumber - 1) + returnFibonacci(inputNumber - 2));
}

/*
* returnFibonacci2
* * Return Finbonacci using dynamic program
*/
int returnFibonacci2(int inputNumber = 0) {
    int f[inputNumber + 2];
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= inputNumber; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[inputNumber];
}
