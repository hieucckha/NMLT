#include <iostream>

using namespace std;

int main() {
	float a, b, c;
	cout << "Nhap ba canh cua mot tam giac: \n"; cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		
		cout << "Ba canh do lap thanh mot tam giac" << endl;
		
		// Kiem tra tam giac deu
		if (a == b == c) {
			cout << "Ba canh nay lap thanh mot tam giac deu" << endl;
		}
		
		// Kiem tra tam giac can
		if ((a == b) || (a == c) || (b == c)) {
			// Kiem tra co vuong khong
			if ((pow(c, 2) == pow(a, 2) + pow(b, 2)) || (pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2))) {
				cout << "Day la tam giac vuong can" << endl;
			}
			
			// Con lai la tam giac can
			else {
				cout << "Day la tam giac can" << endl;
			}
		}

		// Kiem tra tam giac vuong
		if ((pow(c, 2) == pow(a, 2) + pow(b, 2)) || (pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2))) {
			cout << "Day la tam giac vuong" << endl;
		}
	}
	else {
		cout << "Ba canh do khong lap thanh mot tam giac" << endl;
	}
	return 0;
}