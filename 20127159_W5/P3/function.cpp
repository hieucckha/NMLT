#include "function.h"

#include "math.h"

/**
 * USCLN
 * * Find greatest common divisor
*/
int USCLN(int a, int b, int c) {
    int max = 0;
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;

    for (int i = max; i > 0; --i) {
        if ((a % i == 0) && (b % i == 0) && (c % i == 0)) {
            return i;
        }
    }
}