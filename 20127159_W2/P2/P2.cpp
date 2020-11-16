#include <iostream>
using namespace std;

int main() { // ax^2 + bx + c = 0
	float a, b, c, delta;

	cout << "Nhap vao ba so a, b, c trong bieu thuc 'ax ^ 2 + bx + c': "; cin >> a >> b >> c;
	
	// a = 0 -> pt bac nhat
	if (a == 0) {
		cout << "Gia tri cua x la: " << -c / a << endl;
	}

	else {
		delta = pow(b, 2) - 4 * a * c;
		
		if (delta < 0.0) {
			cout << "Phuong trinh vo nghiem" << endl;
		}
		
		if (delta == 0) {
			cout << "Phuong trinh co nghiem kep: x1 = x2 = " << -b / 2 *a;
		}
		
		if (delta > 0) {
			cout << "Phuong trinh co nghiem x1 = " << (-b + sqrt(delta) / 2 * a) << endl;
			cout << "Phuong trinh co nghiem x2 = " << (-b - sqrt(delta) / 2 * a) << endl;
		}	
	}
	return 0;
}