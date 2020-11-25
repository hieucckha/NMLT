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

bool isArrayLarger(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] < a[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isArraySmaller(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}