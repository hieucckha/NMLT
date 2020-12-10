#include "funcP2.h"

#include <cstring>

bool isPalidrom(char a[]) {
    int length = strlen(a);

    for (int i = 0; i < (length / 2); ++i) {
        if (a[i] != a[length - i - 1]) {
            return false;
        }
    }

    return true;
}