#include "function.h"

#include <iostream>

void inputArray(double a[], int &n) {
    std::cout << "Nhap so phan tu: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "a[" << i << "]: ";
        std::cin >> a[i];
    }
}

void printArray(double a[], int n) {
    std::cout << "Print all of element in array: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "a[" << i << "]: " << a[i] << std::endl;
    }
}

int countPosNumber(double a[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < 0) {
            count++;
        }
    }
    return count;
}