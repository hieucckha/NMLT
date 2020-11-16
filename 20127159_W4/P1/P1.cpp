#include <math.h>

#include <iostream>
using namespace std;

int luocbo(int);
void printPrimarynumber(int);

int main() {
    int inputNumber, tempNumber;

    // Input number 
    cout << "Input number: ";
    cin >> inputNumber;

    // Input Number > 0
    if (inputNumber < 0) {
        tempNumber = abs(inputNumber);
        cout << "Input number: " << inputNumber << " Resualt: " << -(luocbo(tempNumber)) << endl;
        cout << "Prime factors of " << inputNumber <<  " is: ";

        // 
        printPrimarynumber(tempNumber);
        
    } else { // Input Number < 0
        tempNumber = inputNumber;
        cout << "Input number: " << inputNumber << " Resualt: " << (luocbo(tempNumber)) << endl;
        cout << "Prime factors of " << inputNumber <<  " is: ";
        
        // 
        printPrimarynumber(tempNumber);

    }

    return 0;
}

int luocbo(int inputNumber) {
    int tempNumber;
    int resualt = 0;

    // Delete '5' and '0' in inputNumber
    tempNumber = inputNumber;
    while (tempNumber != 0) {
        if (((tempNumber % 10) != 5) && ((tempNumber % 10) != 0)) {
            resualt = (resualt * 10) + (tempNumber % 10);
        }
        tempNumber /= 10;
    }

    // inputNumber = 12345 -> resualt = 54321
    tempNumber = resualt;
    resualt = 0;

    // Reverse tempNumber -> resualt
    while (tempNumber != 0) {
        resualt = (resualt * 10) + (tempNumber % 10);
        tempNumber /= 10;
    }
    return resualt;
}

void printPrimarynumber(int inputNumber) {
    int tempNumber = inputNumber;
    int count;

    if (inputNumber < 0) {
        cout << "None";
    }

    if (inputNumber == 0) {
        cout << "0";
    }

    if (inputNumber == 1) {
        cout << "1";
    }

    for (int i = 2; i <= (inputNumber / 2); i++) {
        count = 0;
        while (tempNumber % i == 0) {
            ++count;
            tempNumber /= i;
        }
        if (count) {
            cout << i;
            if (count > 1) {
                cout << "^" << count;
            }
            if (tempNumber > i) {
                cout << " * ";
            }
        }
    }
}