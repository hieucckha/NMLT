#include "function.h"

#include <iostream>

#include "math.h"

int USCLN(int x, int y) {
    for (int i = ((x > y) ? x : y); i > 0; --i) {
        if ((x % i == 0) && (y % i == 0)) {
            return i;
        }
    }
}

int BSCNN(int x, int y) {
    for (int i = 1; i < (x * y); ++i) {
        if ((i % x == 0) && (i % y == 0)) {
            return i;
        }
    }
}