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

void printArray(int a[],int n) {
    std::cout << "Print all of element in array: " << std::endl;
    for (int i=0;i < n;++i) {
        std::cout << "a[" << i << "]: " << a[i] << std::endl;
    }
}

bool isXHasInArray(int a[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}

void addX(int a[], int &n, int x) {
    n++;
    for (int i = n - 1; i > 1 - 1; i--) {
        a[i] = a[i - 1];
    }
    a[1] = x;
}
