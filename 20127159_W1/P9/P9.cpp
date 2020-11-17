#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	// CV = 2 * pi * r
	// S = pi * r^2
	float a;
	const float pi = 3.14;
	cout << "Nhap ban kinh: "; cin >> a;
	cout << "Chu vi la:" << (2 * pi * a) << endl;
	cout << "Dien tich la:" << (pi * a * a) << endl;
	return 0;
}