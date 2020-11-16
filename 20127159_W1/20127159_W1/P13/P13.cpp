#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	cout << "(x^2+1)^n = " << pow((pow(x, 2) + 1), n) << endl;
	return 0;
}