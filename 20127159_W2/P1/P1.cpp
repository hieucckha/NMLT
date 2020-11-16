#include <iostream>
#include "math.h"

using namespace std;

int main() {
	int n;
	float x;

	cout << "Nhap vao n: "; cin >> n;
	cout << "Nhap vao x: "; cin >> x;
	cout << "Gia tri cua bieu thuc: (x^2+1)^n= " << pow(pow(x, 2) + 1, n);

	return 0;
}