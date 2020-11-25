#include "function.h"

#include <iostream>

#include "math.h"

void inputArray(int a[], int &n) {
    std::cout << "Nhap so phan tu: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "a[" << i << "]: ";
        std::cin >> a[i];
    }
}

bool checkSquareNumber(int a) {
    if ((a / 10 == 2) && (a / 10 == 3) && (a / 10 == 7) && (a / 10 == 8)) {
        return false;
    }

    for (int i = 1; i * i <= a; ++i) {
        if ((a % i == 0) && (a / i == i)) {
            return true;
        }
    }
    return false;
}

bool checkPerfectNumber(int a) {
    int sum = 1;
    for (int i = 2; i <= (a / 2); ++i) {
        if ((a % i) == 0) {
            sum += i;
        }
    }
    if (sum == a) {
        return true;
    }
    return false;
}

bool checkPrimaryNumber(int a) {
    if ((a == 1) || (a == 0)) {
        return false;
    }

    if (a % 2 == 0) {
        return false;
    }
    for (int i = 3; i < a; i += 2) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

bool checkPalindromNumber(int a) {
    int tempNumber = a, tempNumber2 = 0;
    while (tempNumber != 0) {
        tempNumber2 = (tempNumber2 * 10) + (tempNumber % 10);
        tempNumber /= 10;
    }
    if (tempNumber2 == a) {
        return true;
    }
    return false;
}

int sumAllSquare(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (checkSquareNumber(a[i]) == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int sumAllPerfect(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (checkPerfectNumber(a[i]) == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int sumAllPrimary(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (checkPrimaryNumber(a[i]) == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int sumAllPalidrom(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (checkPalindromNumber(a[i]) == 0) {
            sum += a[i];
        }
    }
    return sum;
}