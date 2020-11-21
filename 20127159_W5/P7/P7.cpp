#include <iostream>

#include "function.h"
using namespace std;

int main() {
    int a = 0, d = 0, q = 0, r = 0;
    cout << "Input a - dividend (a >= 0): ";
    cin >> a;
    cout << "Input d - divisor (d > 0): ";
    cin >> d;
    if (divide(a, d, r) == true) {
        cout << "The resualt of " << a << " divide " << d << " is: " << r << endl;
        mod(a,d,r);
        cout << "The remider is: " << r;
    }
    else {
        cout << "Can't divide by 0" << endl;
    }

    return 0;
}