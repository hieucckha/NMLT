#include <iostream>

#include "function.h"
using namespace std;

/*
	int n = 0;
    cout << "Nhap so phan tu can nhap: ";
    cin >> n;
    int* ptrInt = new int[n];
    for (int i = 0; i< n;++i) {
    	cout << "a[" << i << "]: "; cin >> ptrInt[i];
    }
    cout << endl;
    for (int i = 0; i< n;++i) {
    	cout << "a[" << i << "]: " << ptrInt[i] << endl;
    }
    delete[] ptrInt;
	*/

int main() {
    int a[100],n;
    inputArray(a,n);

    cout << endl;

    cout << sumAllNotNegative(a, n) << endl;
    cout << sumAllDivied3(a, n) << endl;
    cout << sumAllBeginByOdd(a, n) << endl;

    return 0;
}