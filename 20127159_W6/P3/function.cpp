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

// ! 0 is not positive
bool isHasPositiveNumber(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            return true;
        }
    }
    return false;
}

bool isAllPositiveNumber(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (a[i] < 1) {
            return false;
        }
    }
    return true;
}

void flip(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (a[i] > 0) {
            a[i] = a[i] - a[i] - a[i];
        }
    }
}