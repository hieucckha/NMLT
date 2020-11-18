#include <iostream>

#include "function.h"

using namespace std;

int main() {
    int inputNumber = 0;

    cout << "Input k (k > 0): ";
    cin >> inputNumber;
    cout << "F(k) in finbonacci is: " << returnFibonacci(inputNumber) << endl;
    return 0;
}