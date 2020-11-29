#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[15], n;
    inputArray(a, n);
    cout << '\n';

    cout << "The number of elements ending in is 6 and divisible by 6 in the array: " << count(a, n) << '\n';
    cout << "Average the existing primes in the array: " << tbc(a, n) << '\n';
    cout << "Number of different primes number: " << dif(a, n) << '\n';

    return 0;
}