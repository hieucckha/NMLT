#include "function.h"

#include <iostream>
using namespace std;

void inputArr(int a[], int b[], int& n, int& m) {
    int i;
    cout << "Nhap so phan tu trong day A: ";
    cin >> n;
    while (n < 1 || n > 25) {
        cout << "Nhap lai: ";
        cin >> n;
    }
    for (i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << endl;

    cout << "Nhap so phan tu trong day B: ";
    cin >> m;
    while (m < 1 || m > 25) {
        cout << "Nhap lai: ";
        cin >> m;
    }
    for (i = 0; i < m; i++) {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }
    cout << endl;
}

void printArr1(int a[], int n) {
    cout << "All element in array: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void printArr2(int a[], int b[], int n, int m) {
    cout << "All element in array A: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "All element in array B: ";
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

bool checkOne(int number, int b[], int m) {
    for (int i = 0; i < m; ++i) {
        if (number == b[i]) {
            return true;
        }
    }
    return false;
}

void checkAll(int a[], int b[], int n, int m) {
    cout << "List of elements are in A but not in B: ";
    for (int i = 0; i < n; i++) {
        if (checkOne(a[i], b, m) == false) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

void merge(int a[], int n, int b[], int m, int c[], int& o) {
    for (int i = 0; i < n; i++) {
        if (checkOne(a[i], b, m) == false) {
            c[o] = a[i];
            o++;
        }
    }
    for (int i = 0; i < m; i++) {
        c[o] = b[i];
        o++;
    }
}
