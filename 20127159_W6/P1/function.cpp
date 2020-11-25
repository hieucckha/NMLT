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

long sumAllNotNegative(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        (a[i] > 0) ? (sum += a[i]) : 0;
    }
    return sum;
}

long sumAllDivied3(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        (a[i] % 3 == 0) ? (sum += a[i]) : 0;
    }
    return sum;
}

long sumAllBeginByOdd(int a[], int n) {
    int sum = 0;
    int tempNumber = 0;
    for (int i = 0; i < n; ++i) {
        tempNumber = a[i];
        while (tempNumber >= 10) {
            if (tempNumber / 10 == 0) {
                break;
            }
            tempNumber /= 10;
        }
        (tempNumber % 2 == 1) ? (sum += a[i]) : 0;
    }
    return sum;
}