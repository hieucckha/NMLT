#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
	float a;
	cout << "Nhap so x: ";
	cin >> a;
	cout << "A = 3x ^ 3 - 2x ^ 2 = " << fixed << setprecision(2) << (3 * pow(a, 3) - (2 * pow(a, 2))) << endl;
	return 0;
}