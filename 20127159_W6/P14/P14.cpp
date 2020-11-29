#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], b[100], c[100], m = 0, n = 0, o = 0;
    inputArr(a, b, n, m);
    checkAll(a, b, n, m);
    merge(a, n, b, m, c, o);
    printArr1(c, o);
    return 0;
}