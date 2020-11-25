#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], n;
    inputArray(a,n);
    cout << "Sum of square number is: " << sumAllSquare(a,n) << endl;
    cout << "Sum of perfect number is: " << sumAllPerfect(a,n) << endl;
    cout << "Sum of primary number is: " << sumAllPrimary(a,n) << endl;
    cout << "Sum of palindrom number is: " << sumAllPalidrom(a,n) << endl;

    return 0;
}