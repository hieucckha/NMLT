#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], n = 0, b[100], m = 0, c[100];
    inputArray(a, n);
    inputArray(b, m);
    cout << "Is the array with increasing value: " << ((isArrayLarger(a, n) == 1) ? "True\n" : "False\n");
    if (isArrayLarger(a, n) == false) {
        sort(a, n);
    }
    cout << "Is the array with increasing value: " << ((isArrayLarger(b, m) == 1) ? "True\n" : "False\n");
    if (isArrayLarger(b, m) == false) {
        sort(b, m);
    }
    merge2Array(a, n, b, m, c);
    printArray(c, (m + n));
    return 0;
}