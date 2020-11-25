#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], n;
    inputArray(a, n);
    cout << '\n'
         << "Is the array has positive number: " << (isHasPositiveNumber(a, n) == 1 ? "True" : "False") << endl;
    cout << "Are all elementary in array positive number: " << (isAllPositiveNumber(a, n) == 1 ? "True" : "False") << endl;
    if (isAllPositiveNumber(a, n) == 0) {
        flip(a, n);
        for (int i = 0; i < n; ++i) {
            cout << "a[" << i << "]: " << a[i] << endl;
        }
    }

    return 0;
}