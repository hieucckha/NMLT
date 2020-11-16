#include <iostream>

using namespace std;

int main() {

	char ch;
	cout << "Hay nhap mot chu: "; cin >> ch;
	
	while (true) {
		
		if ((ch >= 65) && (ch <= 90)) {
			cout << "Chu da nhap la: " << ch << endl;
			ch += 32;
			cout << "Chu la chu hoa doi thanh chu thuong: " << ch << endl;
			break;
		}

		if ((ch >= 97) && (ch <= 112)) {
			cout << "Chu da nhap la: " << ch << endl;
			ch -= 32;
			cout << "Chu la chu thuong doi thanh chu hoa: " << ch << endl;
			break;
		}
	
		else {
			cout << "Moi nhap lai chu cai: "; cin >> ch;
		}
	}
	return 0;
}