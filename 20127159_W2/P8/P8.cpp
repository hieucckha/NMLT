#include <iostream>
using namespace std;

int main() {

	int numberOfDayRent, money;
	char roomType;

	cout << "Nhap loai phong (A,B,C): "; cin >> roomType;
	while (true) {
		if (roomType == 'A' || roomType == 'a' || roomType == 'B' || roomType == 'b' || roomType == 'C' || roomType == 'c') {
			break;
		}
		cout << "Loai phong khong hop le, nhap lai ma phong: "; cin >> roomType;
	}

	cout << "Nhap so ngay thue phong: "; cin >> numberOfDayRent;
	while (true) {
		if (roomType >= 0) {
			break;
		}
		cout << "So ngay khong hop le, moi nhap lai so phong"; cin >> numberOfDayRent;
	}

	if (roomType == 'A' || roomType == 'a') {
		if (numberOfDayRent > 12) {
			money = 0.9 * numberOfDayRent * 400000;
		}
		money = numberOfDayRent * 400000;
	}

	if (roomType == 'B' || roomType == 'b') {
		if (numberOfDayRent > 12) {
			money = 0.92 * numberOfDayRent * 300000;
		}
		money = numberOfDayRent * 300000;
	}

	if (roomType == 'C' || roomType == 'c') {
		if (numberOfDayRent > 12) {
			money = 0.92 * numberOfDayRent * 250000;
		}
		money = numberOfDayRent * 250000;
	}
	cout << "So tien thue phong khach san la: " << money << endl;
	return 0;
}