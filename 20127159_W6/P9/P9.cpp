#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], x, n = 0;
    cout << "Input x (-255 < x < 255): ";
    cin >> x;
    decimal2Binary(x, a, n);
    printArray(a, n);
    return 0;
}