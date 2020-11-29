#include <iostream>

#include "function.h"

using namespace std;
int main() {
    int a[100], n = 0, x;

    inputArray(a, n);
    cout << "Input the number you want to find: ";
    cin >> x;
    cout << x << ((isXHasInArray(a, n, x) ? " has in array" : " hasn't in array"));
    if (isXHasInArray(a, n, x) == false) {
        cout << "Before add x in array: "
             << "\n";
        printArray(a, n);
        addX(a, n, x);
        cout << '\n'
             << "After add x in array: " << '\n';
        printArray(a, n);
    }
    return 0;
}