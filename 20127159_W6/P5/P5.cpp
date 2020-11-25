#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], n;
    inputArray(a, n);

    cout << "Is the array with increasing value: " << ((isArrayLarger(a, n) == 1) ? "True" : "False") << endl;
    cout << "Is the array with descending value: " << ((isArraySmaller(a, n) == 1) ? "True" : "False") << endl;
    cout << '\n';

    if ((isArraySmaller(a, n) == 0) && (isArrayLarger(a, n) == 0)) {
        cout << "Before sort: " << endl;
        for (int i = 0; i < n; i++) {
            cout << "a[" << i << "]: " << a[i] << endl;
        }
        cout << '\n';
        sort(a, n);
        cout << "After sort: " << endl;
        for (int i = 0; i < n; i++) {
            cout << "a[" << i << "]: " << a[i] << endl;
        }
    }
    return 0;
}