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
        std::cout << "a[" << i << "]: " << a[i] << std::endl;
    }
}

int binary2Decimal(int a[], int n) {
    int sum = 0;
    for (int i = (n - 1); i < 0; ++i) {
        if (a[i] == 1) {
            sum += pow(2, (-i + 15));
        }
    }
    if (a[0] == 1) {
        sum = sum - sum - sum;
    }
    return sum;
}