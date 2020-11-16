#include <iostream>

using namespace std;

void check(int n) {
	int truoc = n % 10, sau, kt1 = 0, kt2 = 0;
	
	n /= 10;
	
	while (n != 0) {
		sau = n % 10;
		
		if (truoc < sau) {
			kt1 = 1;
		}
		
		if (truoc > sau) {
			kt2 = 1;
		}

		truoc = sau;
		n /= 10;
	}

	if (kt1 == 0 && kt2 == 1) {
		cout << "Cac chu so tang dan tu trai sang phai" << endl;
	}
	if (kt2 == 0 && kt1 == 1) {
		cout << "Cac chu so giam dan tu trai sang phai" << endl;
	}
	
	if (kt1 == 1 && kt2 == 1|| kt1 == 0 && kt2 == 0) {
		cout << "Cac chu so khong tang/giam dan tu trai sang phai" << endl;
	}
}

int main() {
	
	int n;
	
	cout << "Nhap vao so nguyen duong lon hon 0: ";cin >> n;

	while (true) {
		if (n > 1) {
			break;
		}
		cout << "Nhap vao so nguyen duong lon hon 0: ";cin >> n;
	}
	check(n);
 
    return 0;
}