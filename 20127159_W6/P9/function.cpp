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

void printArray(int a[], int n) {
    std::cout << "Print all of element in array: " << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << a[i];
    }
}

void decimal2Binary(int number, int a[], int &n) {
    int temp[8];
    for (int i = 0; i < sizeof(temp) / sizeof(int); ++i) {
        temp[i] = 0;
    }
    if (number > 0) {
        a[0] = 0;
    } else {
        a[0] = 1;
        number = abs(number);
    }

    for (int i = 0; i < 8; ++i) {
        temp[i] = number % 2;
        number /= 2;
    }
    for (int i = 7; i >= 0; --i) {
        a[-i + 8] = temp[i];
    }
    n = 9;
}