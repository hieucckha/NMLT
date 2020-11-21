#include <iostream>

#include "function.h"
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    cout << "Input a (a > 0): ";
    cin >> a;
    cout << "Input b (b > 0): ";
    cin >> b;
    cout << "Input c (c > 0): ";
    cin >> c;
    cout << "Greatest common divisor of a, b, c: " << USCLN(a, b, c);
    return 0;
}