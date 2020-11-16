#include <iostream>
using namespace std;

int main() {

	int day, month, year;
	bool namNhuan = false;

	// Kiem tra nam nhuan
	cout << "Nhap vao nam hien tai: "; cin >> year;
	if (year % 4 == 0) {
		namNhuan = true;
	}
	cout << "Nhap vao thang "; cin >> month;


	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "Thang da nhap hop le" << endl;
		cout << "Nhap vao ngay "; cin >> day;

		// Kiem tra ngay co hop le khong
		if (day > 31 || day <= 0) {
			cout << "Ngay nhap khong hop le" << endl;
		}

		// Ngay hop le 
		if (day > 0 && day < 31) {
			cout << "Ngay hop le" << endl;
			cout << "Thang da nhap co 31 ngay" << endl;

			if (day == 1) {
				cout << "Ngay hom sau la ngay 2" << endl;
				// Thang 3 va nam ko nhuan 
				if (namNhuan == false && month == 3) {
					cout << "Ngay hom truoc la ngay 28" << endl;
				}
				// Thang 3 va nam nhuan 
				else if (namNhuan == true && month == 3) {
					cout << "Ngay hom truoc la ngay 29" << endl;
				}
				// Cac truong hop con lai
				else {
					cout << "Ngay hom truoc la ngay 30" << endl;
				}
			}

			else if (day >= 2 && day <= 30) {
				cout << "Ngay hom sau la ngay " << day + 1 << endl;
				cout << "Ngay hom truoc la ngay " << day - 1 << endl;
			}

			else if (day == 31) {
				cout << "Ngay hom sau la ngay 1" << endl;
				cout << "Ngay hom truoc la ngay 30" << endl;
			}
		}
		break;
	case 4: case 6: case 9: case 11:
		cout << "Thang da nhap hop le" << endl;
		cout << "Nhap vao ngay "; cin >> day;
		// Kiem tra ngay co hop le
		if (day > 30 || day <= 0) {
			cout << "Ngay nhap khong hop le" << endl;
		}
		// 
		if (day > 0 && day < 30) {
			cout << "Ngay hop le" << endl;
			cout << "Thang da nhap co 30 ngay" << endl;

			if (day == 1) {
				cout << "Ngay hom sau la ngay 2" << endl;
				cout << "Ngay hom truoc la ngay 31" << endl;
			}

			else if (day >= 2 && day <= 29) {
				cout << "Ngay hom sau la ngay " << day + 1 << endl;
				cout << "Ngay hom truoc la ngay " << day - 1 << endl;
			}

			else if (day == 30) {
				cout << "Ngay hom sau la ngay 1" << endl;
				cout << "Ngay hom truoc la ngay 29" << endl;
			}
		}
		break;
	case 2:
		cout << "Thang da nhap hop le" << endl;
		cout << "Nhap vao ngay "; cin >> day;
		
		if (namNhuan == true) {
			if (day >= 30 || day <= 0) {
				cout << "Ngay nhap khong hop le" << endl;
			}
	
			if (day > 0 && day <= 29) {
				cout << "Ngay hop le" << endl;
				cout << "Thang da nhap co 29 ngay";
			
				if (day == 1) {
					cout << "Ngay hom sau la ngay 2" << endl;
					cout << "Ngay hom truoc la ngay 31" << endl;
				}
				
				else if (day >= 2 && day <= 28) {
					cout << "Ngay hom sau la ngay " << day + 1 << endl;
					cout << "Ngay hom truoc la ngay " << day - 1 << endl;
				}
				
				else if (day == 29) {
					cout << "Ngay hom sau la ngay 1" << endl;
					cout << "Ngay hom truoc la ngay 28" << endl;
				}
			}
		}
		
		if (namNhuan == false) {
			if (day >= 29 || day <= 0) {
				cout << "Ngay nhap khong hop le" << endl;
			}
		
			if (day > 0 && day <= 28) {
				cout << "Ngay hop le" << endl;
				cout << "Thang da nhap co 28 ngay";
			
				if (day == 1) {
					cout << "Ngay hom sau la ngay 2" << endl;
					cout << "Ngay hom truoc la ngay 31" << endl;
				}
				
				else if (day >= 2 && day <= 28) {
					cout << "Ngay hom sau la ngay " << day + 1 << endl;
					cout << "Ngay hom truoc la ngay " << day - 1 << endl;
				}
				
				else if (day == 28) {
					cout << "Ngay hom sau la ngay 1" << endl;
					cout << "Ngay hom truoc la ngay 27" << endl;
				}
			}
		}
		break;
	default:
		cout << "Thang da khong nhap hop le" << endl;
		break;
	}
	return 0;
}