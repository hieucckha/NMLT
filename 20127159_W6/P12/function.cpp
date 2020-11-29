#include "function.h"

#include <iostream>

#include "math.h"

void inputArray(int a[], int& n) {
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

int count(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if ((a[i] % 10 == 6) && (a[i] % 6 == 0)) {
            count++;
        }
    }
    return count;
}

bool checkPrimaryNumber(int inputNumber) {
    if ((inputNumber == 0) || (inputNumber == 1)) {
        return false;
    }
    for (int i = 2; i <= sqrt(inputNumber); ++i) {
        if (inputNumber % i == 0) {
            return false;
        }
    }
    return true;
}

float tbc(int a[], int n) {
    int sum = 0, count = 0;
    for (int i = 0; i < n; ++i) {
        if (checkPrimaryNumber(a[i]) == 1) {
            sum += a[i];
            count++;
        }
    }
    return ((float)sum / (float)count);
}

int dif(int a[], int& n) {
    int temp[100], tempIndex = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (checkPrimaryNumber(a[i]) == 1) {
            temp[tempIndex] = a[i];
            tempIndex++;
        }
    }
    for (int i = 0; i < tempIndex; ++i) {
        for (int j = i + 1; j < tempIndex; ++j) {
            if (temp[j] == temp[i]) {
                goto hear;
            }
        }
        count++;
    hear:
        continue;
    }
    return count;
}