#include <iostream>

#include "function.h"

using namespace std;
int main() {
    const int test01[] = {
        27, 16, 369, 0};
    const int test02[] = {
        45, 25, 890, 1};
    for (int i = 0; i < sizeof(test01) / sizeof(int); ++i) {
        // cout << test01[i] << " " << test02[i] << " " << USCLN(test01[i], test02[i]) << endl;
		cout << test01[i] << " " << test02[i] << " " << BSCNN(test01[i], test02[i]) << endl;
	}

    return 0;
}