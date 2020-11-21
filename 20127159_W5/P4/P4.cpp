#include <iostream>

#include "function.h"
using namespace std;

int main() {
    const int test1[] = {12345, 54321, 9631, 123321, 3579, 5665, 21712};
    
    for (int i = 0; i < sizeof(test1) / sizeof(int); ++i) {
        cout << test1[i] << " " << checkIsLarger(test1[i]) << " " << checkIsSmaller(test1[i]) << endl;
    }

    return 0;
}