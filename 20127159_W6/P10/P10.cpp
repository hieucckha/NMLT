#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int a[100], n = 0;
    inputArray(a, n);
	cout << "Number in decimal is: " << binary2Decimal(a,n);
    return 0;
}