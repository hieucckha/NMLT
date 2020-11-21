#include "function.h"

/*
* divide
* * Divide a number by number using subtraction 
* @param: a: dividend; d: divisor; q: is a variable return the resualt of divide
*/
bool divide(int a, int d, int &q) {
    if (d == 0) {
        return false;
    }

    while (a >= d) {
        a -= d;
        ++q;
    }
    return true;
}

/*
* mod
* * Retrun remainder after dividing one number by number
* @param: a: dividend; d: divisor; r: is a variable return remainder
*/
bool mod(int a, int d, int &r) {
    if (d == 0) {
        return false;
    }

    while (a >= d) {
        a -= d;
    }
    r = a;
    
    return true;
}