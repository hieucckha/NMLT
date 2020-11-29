#include <iostream>

#include "function.h"
using namespace std;

int main() {
    int a[100],n;
    inputArray(a,n);

    cout << endl;

    cout << sumAllNotNegative(a, n) << endl;
    cout << sumAllDivied3(a, n) << endl;
    cout << sumAllBeginByOdd(a, n) << endl;

    return 0;
}