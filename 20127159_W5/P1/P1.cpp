#include <iostream>

#include "function.h"

using namespace std;

int main() {
    // int inputNumber;
    // cout << "Input number: "; cin >> inputNumber;

    const int test[] = {13, 546, 743};
    for (int i = 0; i < sizeof(test) / sizeof(int); ++i) {
        // cout << test[i] << " " << checkPrimaryNumber(test[i]) << endl;
		// cout <<  test[i] << " ";
		// printPrimaryOfNumber(test[i]);
		// cout << endl;
		printEachCharaterR2L(test[i]);
		// cout << reverseNumber(test[i]) << endl;
		printEachCharaterL2R(test[i]);
		// cout << sumOfEachCharaterNumber(test[i]) << endl;
		// cout << sumOfEachCharaterNumberLower10(test[i]) << endl;
	}
	// printPrimaryNumber(100);
    return 0;
}