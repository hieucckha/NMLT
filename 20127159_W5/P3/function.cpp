#include "function.h"

#include "math.h"

int USCLN(int x, int y, int z) {
    int max = 0;
    max = (x > y) ? x : y;
    max = (max > z) ? max : z;

    for (int i = max; i > 0; --i) {
        if ((x % i == 0) && (y % i == 0) && (z % i == 0)) {
            return i;
        }
    }
}