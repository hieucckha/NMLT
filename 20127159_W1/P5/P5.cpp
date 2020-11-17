#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Nhap so ban dau: "; cin >> a;
	cout << "Nhap so thu hai: "; cin >> b;
	cout << "Gia tri ban dau cua 2 so: " << a << " va " << b << endl;
	cout << "Gia tri sau khi hoan vi: " << endl;
	
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}