#include "funcP3.h"

#include <cstring>

void swapChar(char &a, char &b) {
    char c = a;
    a = b;
    b = c;
}

void reverseString(char a[]) {
    for (int i = 0; i < strlen(a) / 2; ++i) {
        swapChar(a[i], a[strlen(a) - i - 1]);
    }
}