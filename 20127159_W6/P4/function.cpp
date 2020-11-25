#include "function.h"

#include <iostream>

void inputArray(int a[], int &n) {
    std::cout << "Nhap so phan tu: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "a[" << i << "]: ";
        std::cin >> a[i];
    }
}

bool isArraySymmetric(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

bool isArrayPosAndNeg(int a[], int n) {
    for (int i = 0; i < (n - 1); ++i) {
        if (a[i] * a[i + 1] > 0) {
            return false;
        }
    }
    return true;
}

bool isArray2NotSame(int a[], int n) {
    for (int i = 0; i < (n - 1); ++i) {
        if (a[i] == a[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isArray3AP(int a[], int n) {
    int flag = n % 3;
    for (int i = 0; i < (n + flag); i += 3) {
        if (flag == 0) {
            if ((a[i + 1] - a[i]) != (a[i + 2] - a[i + 1])) {
                return false;
            }
        }
        if (flag == 1) {
            if (i == (n - flag)) {
                return true;
            }
            if ((a[i + 1] - a[i]) != (a[i + 2] - a[i + 1])) {
                return false;
            }
        }
        if (flag == 2) {
            if (i == (n - flag)) {
                return true;
            }
            if ((a[i + 1] - a[i]) != (a[i + 2] - a[i + 1])) {
                return false;
            }
        }
    }
    return true;
}
