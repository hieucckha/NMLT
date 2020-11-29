#include <iostream>

#include "function.h"
using namespace std;

int main() {
    int a[10000], n = 0, x = 0;

    inputArray(a, n);
    cout << "Input x: ";
    cin >> x;
    reord(a, n, 6);
    return 0;
}