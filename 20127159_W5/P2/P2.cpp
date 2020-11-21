#include <iostream>

#include "function.h"

using namespace std;
int main() {
    int a = 0, b = 0;
    cout << "Input a (a > 0): ";
    cin >> a;
    cout << "Input b (b > 0): ";
    cin >> b;
    cout << "Greatest common divisor of " << a << " & " << b << ": " << USCLN(a, b) << endl;
    cout << "Least common multiple of " << a << " & " << b << ": " << BSCNN(a, b) << endl;

    return 0;
}