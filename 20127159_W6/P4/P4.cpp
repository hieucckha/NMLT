#include <iostream>

#include "function.h"
using namespace std;

int main() {
    int a[100], n = 0;
    inputArray(a, n);

    cout << "Does the array symmetrical: " << ((isArraySymmetric(a, n) == 1) ? "True" : "False") << endl;
    cout << "Does the array mix positive and negative numbers?: " << ((isArrayPosAndNeg(a, n) == 1) ? "True" : "False") << endl;
    cout << "Does array where all pairs of elements standing next to each other have different values? : " << ((isArray2NotSame(a, n) == 1) ? "True" : "False") << endl;
    cout << "Dose the array has all 3 elements standing next to each other to form the arithmetic addition: " << ((isArray3AP(a, n) == 1) ? "True" : "False") << endl;

    return 0;
}