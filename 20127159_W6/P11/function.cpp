#include "function.h"

#include <iostream>
using namespace std;
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

void printAll(int a[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
            continue;
        }
        if ((x % a[i]) == 0) {
            std::cout << "a[" << i << "]: " << a[i] << " is a divisor of " << x << '\n';
        }
    }
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void reord(int a[], int n, int x) {
    int i, j, b[100], o = 0, count = 0, temp;
    for (i = 0; i < n; i++) {
        if (x % a[i] == 0) {
            b[o] = a[i];
            o++;
            for (j = i; j < n; j++) {
                a[j] = a[j + 1];
            }
            i--;
            n--;
            count++;
        }
    }

    for (j = 0; j < n - 1; j++) {
        for (int i = j + 1; i < n; i++) {
            if (a[j] > a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    i = n + count;
    for (j = o; j >= 0; j--) {
        a[i] = b[j];
        i--;
    }
    cout << "The new order of the elements in the array: ";
    for (i = 0; i < n + count; i++) {
        cout << a[i] << " ";
    }
}