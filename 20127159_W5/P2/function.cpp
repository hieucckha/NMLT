#include "function.h"

#include <iostream>

#include "math.h"

/**
 * USCLN
 * * Find greatest common divisor of two number
*/
int USCLN(int a, int b) {
    int resualt = 0;
    for (int i = ((a > b) ? a : b); i > 0; --i) {
        if ((a % i == 0) && (b % i == 0)) {
            resualt = i;
            break;
        }
    }
    return resualt;
}

/**
 * BSCNN
 * * Find least common multiple of two number
*/
int BSCNN(int a, int b) {
    int resualt = 0;
    for (int i = 1; i < (a * b); ++i) {
        if ((i % a == 0) && (i % b == 0)) {
            resualt = i;
            break;
        }
    }
    return resualt;
}