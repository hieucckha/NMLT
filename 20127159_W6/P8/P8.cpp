#include <iostream>

#include "function.h"

using namespace std;

int main() {
    double a[100];
    int n = 0;
    inputArray(a, n);
    cout << "The number of postive number is: " << countPosNumber(a, n);

    return 0;
}