#include <iostream>

using namespace std;

int main() {

	float distance;
	cout << "Nhap so km di taxi: "; cin >> distance;

	while (true) {
		if ((distance <= 0)) {
			cout << "Nhap lai so km di taxi: "; cin >> distance;
		}
		else {
			break;
		}
	}

	// 0.0 -> 1.0
	if (distance <= 1) {
		cout << "So tien phai tra la: 15000d" << endl;
	}

	// 1.0 -> 5.0
	if ((distance > 1) && (distance <= 5)) {
		cout << "So tien phai tra la: " << 15000 + (distance - 1) * 13500;
	}

	// 5.0 - inf
	if ((distance > 6) && (distance <= 120)) {
		cout << "So tien phai tra la: " << 15000 + (distance - 1) * 13500 + (distance-4) *11000 << endl;
	}

	// > 120
	if ((distance > 120)) {
		cout << "So tien phai tra la: " << (15000 + (distance - 1) * 13500 + (distance - 4) * 11000) * 0.9 << endl;
	}
	return 0;
}