#include <iostream>
using namespace std;

int main() {
		
	int hourBegin, hourEnd, hourPlay = 0;	
	float money = 0;
	
	/* Xu ly gio nhap vao */
	cout << "Nhap vao gio bat dau: "; cin >> hourBegin;
	while (true) {
		if (hourBegin >= 0 && hourBegin <= 24)
			break;
		cout << "Moi nhap lai gio bat dau: "; cin >> hourBegin;
	}
	cout << "Nhap vao gio ket thuc: "; cin >> hourEnd;
	while (true) {
		if (hourEnd >= 0 && hourEnd <= 24)
			break;
		cout << "Moi nhap lai gio Ket thuc: "; cin >> hourEnd;
	}

	/* Xu ly tien */
	if (hourBegin == hourEnd) {
		cout << "Ban chua su dung dich vu, so tien la: 0d" << endl;
	}
	//
	else if (hourBegin < hourEnd) {
		int count = hourEnd - hourBegin;

		for (int i = 0; i < count; ++i) {
			if (hourBegin >= 0 && hourBegin <= 7) {

				++hourPlay;
				++hourBegin;

				if (hourBegin == hourEnd) {
					if (hourPlay > 2) {
						money = money + 50 * 60 * hourPlay * (float)0.85;
						hourPlay = 0;
					}
					else {
						money = money + 50 * 60 * hourPlay;
						hourPlay = 0;
					}
				}

				if (hourBegin == 7) {
					if (hourPlay > 2) {
						money = money + 50 * 60 * hourPlay * (float)0.85;
						hourPlay = 0;
					}
					else {
						money = money + 50 * 60 * hourPlay;
						hourPlay = 0;
					}
				}
			}
			
			if (hourBegin >= 7 && hourBegin <= 17) {

				++hourPlay;
				++hourBegin;
			
				if (hourBegin == hourEnd) {
					if (hourPlay > 6) {
						money = money + 100 * 60 * hourPlay * (float)0.9;
						hourPlay = 0;
					}
					else {
						money = money + 100 * 60 * hourPlay;
						hourPlay = 0;
					}
				}

				if (hourBegin == 17) {
					if (hourPlay > 2) {
						money = money + 100 * 60 * hourPlay * (float)0.9;
						hourPlay = 0;
					}
					else {
						money = money + 100 * 60 * hourPlay;
						hourPlay = 0;
					}
				}
			}

			if (hourBegin >= 17 && hourBegin <= 24) {

				++hourPlay;
				++hourBegin;

				if (hourBegin == hourEnd) {
					if (hourPlay > 4) {
						money = money + 75 * 60 * hourPlay * (float)0.88;
						hourPlay = 0;
					}
					else {
						money = money + 75 * 60 * hourPlay;
						hourPlay = 0;
					}
				}

				if (hourBegin == 24) {
					if (hourPlay > 4) {
						money = money + 75 * 60 * hourPlay * (float)0.88;
						hourPlay = 0;
					}
					else {
						money = money + 75 * 60 * hourPlay;
						hourPlay = 0;
					}
				}
			}
		}
	}
	//
	else if (hourBegin > hourEnd) {
		int count = (24 - hourBegin) + hourEnd + 1;
		for (int i = 0; i < count; ++i) {
			if (hourBegin >= 0 && hourBegin <= 7) {
				
				++hourPlay;
				++hourBegin;
				
				if (hourBegin == hourEnd) {
					if (hourPlay > 2) {
						money = money + 50 * 60 * hourPlay * (float)0.85;
						hourPlay = 0;
					}
					else {
						money = money + 50 * 60 * hourPlay;
						hourPlay = 0;
					}
				}
				
				if (hourBegin == 7) {
					if (hourPlay > 2) {
						money = money + 50 * 60 * hourPlay * (float)0.85;
						hourPlay = 0;
					}
					else {
						money = money + 50 * 60 * hourPlay;
						hourPlay = 0;
					}
				}
			}

			if (hourBegin >= 7 && hourBegin <= 17) {
				
				++hourPlay;
				++hourBegin;

				if (hourBegin == hourEnd) {
					if (hourPlay > 6) {
						money = money + 100 * 60 * hourPlay * (float)0.9;
						hourPlay = 0;
					}
					else {
						money = money + 100 * 60 * hourPlay;
						hourPlay = 0;
					}
				}

				if (hourBegin == 17) {
					if (hourPlay > 2) {
						money = money + 100 * 60 * hourPlay * (float)0.9;
						hourPlay = 0;
					}
					else {
						money = money + 100 * 60 * hourPlay;
						hourPlay = 0;
					}
				}
			}

			if (hourBegin >= 17 && hourBegin <= 24) {

				++hourPlay;
				++hourBegin;

				if (hourBegin == hourEnd) {
					if (hourPlay > 4) {
						money = money + 75 * 60 * hourPlay * (float)0.88;
						hourPlay = 0;
					}
					else {
						money = money + 75 * 60 * hourPlay;
						hourPlay = 0;
					}
				}

				if (hourBegin == 24) {
					if (hourPlay > 4) {
						money = money + 75 * 60 * hourPlay * (float)0.88;
						hourPlay = 0;
						hourBegin = 0;
					}
					else {
						money = money + 75 * 60 * hourPlay;
						hourPlay = 0;
						hourBegin = 0;
					}
				}
			}
		}
	}

	/* End */
	cout << "So tien su dung la: " << money << "d" << endl;

	return 0;
}