#include <iostream>

using namespace std;

void swapVariable(int &a, int &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

int main() {
	int a, b, c;
	cout << "Nhap vao so a: "; cin >> a;
	cout << "Nhap vao so b: "; cin >> b;
	cout << "Nhap vao so c: "; cin >> c;
	
	cout << "Gia tri a,b,c truoc khi doi: " << a << ", " << b << ", " << c << endl;

	// a -> b; b -> c; c -> a; abc -> cab

	// a -> c; b -> b; c -> a; abc -> cba
	swapVariable(a, c);
	//c -> c; b -> a; a -> b; cba -> cab
	swapVariable(b, c);

	cout << "Gia tri a,b,c sau khi doi: " << a << ", " << b << ", " << c << endl;
	return 0;
}