#include <iostream>

#include "function.h"
using namespace std;

int main() {
    const int test1[] = {0, 36};
    const int test2[] = {0, 15};
    const int test3[] = {0, 105};
    for (int i = 0; i < sizeof(test1) / sizeof(int); ++i) {
        cout << test1[i] << " " << test2[i] << " " << test3[i] << " ";
        cout << USCLN(test1[i], test2[i], test3[i]) << endl;
    }

    return 0;
}