#include "function.h"

int divide(int a, int d) {
    int q = 0;

    while (a >= d) {
        a -= d;
        ++q;
    }

    return q;
}

int mod(int a, int d) {
    int r = 0;
    while (a >= d) {
        a -= d;
    }
    r = a;
    return r;
}