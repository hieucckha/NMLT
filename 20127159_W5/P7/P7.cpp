#include <iostream>

#include "function.h"
using namespace std;

int main() {
    const int a[] = {13, 4, 754, 32, 53, 23, 57};
    const int q[] = {4, 2, 68, 6, 4, 2, 3};
    for (int i = 0; i < sizeof(a) / sizeof(int); ++i) {
        cout << a[i] << " " << q[i] << " " << divide(a[i], q[i]) << " " << mod(a[i], q[i]) << endl;
    }
    return 0;
}