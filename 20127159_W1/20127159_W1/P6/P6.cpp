#include <iostream>
#include <math.h>

using namespace std;

int main() {
//	S =  pi * r^2
	
	const float pi = 3.14;
	float a;
	cout << "Nhap dien tich hinh tron: "; cin >> a;
	cout << "Ban kinh la: " << sqrt((a / pi));
	return 0;
}