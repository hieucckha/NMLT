#include <iostream>

using namespace std;

int main() {

	int month;

	cout << "Nhap vao thang: "; cin >> month;
	while (true) {
		if (month >= 1 && month <= 12) {
			break;
		}
		cout << "Thang khong hop le, moi nhap lai: "; cin >> month;
	}

	switch (month) {
	case 1: case 2: case 3:
		cout << "Thang nay thuoc mua xuan" << endl;
		break;
	case 4: case 5: case 6: 
		cout << "Thang nay thuoc mua he" << endl;
		break;
	case 7: case 8: case 9: 
		cout << "Thang nay thuoc mua thu" << endl;
		break;
	case 10: case 11: case 12:
		cout << "Thang nay thuoc mua dong" << endl;
		break;
	}

	return 0;
}