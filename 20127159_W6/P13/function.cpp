#include "function.h"

#include <iostream>
using namespace std;

void inputArray(int a[], int& n) {
    do {
        cout << "Nhap vao phan tu cua mang: ";
        cin >> n;
    } while (n < 2 || n > 1000);
    for (int i = 00; i < n; i++) {
        cout << "Nhap a[" << i << "]=";
        cin >> a[i];
    }
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "  " << a[i];
    }
}

bool checkPrimeNumber(int n) {
    if (n < 2) {
        return false;
    } else {
        for (int i = 2; i < (n / 2); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
void Delete(int a[], int tmp, int& n) {
    for (int i = tmp; i < n; i++) {
        a[i] = a[i + 1];
        n--;
    }
}

void tachPrime(int a[], int& n) {
    int x = 0, b[100];
    for (int i = 0; i < n; i++)
        if (checkPrimeNumber(a[i])) {
            b[x] = a[i];
            x++;
            Delete(a, i, n);
            i--;
        }
    cout << "\nMang b khong phai so nguyen to: " << endl;
    printArray(a, n);
    cout << "\nMang a cac so nguyen to: " << endl;
    printArray(b, x);
}
void DESCInt(int a[], int n) {
    int desc;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {  // hoan vi a[i] va a[j]
                desc = a[i];
                a[i] = a[j];
                a[j] = desc;
            }
        }
    }
    cout << "Mang b sap xep giam dan la: " << endl;
    printArray(a, n);
}