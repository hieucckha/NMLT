#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], n = 0;
    inputArray(a, n);
	cout << binary2Decimal(a,n);
    return 0;
}