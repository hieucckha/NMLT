#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[1000], n = 0;
    inputArray(a, n);
    cout << endl;

    tachPrime(a, n);
    cout << endl;

    DESCInt(a, n);
    return 0;
}