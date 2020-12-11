#include <iostream>

#include "Fraction.h"
int main() {
    using namespace std;

    int size = 0;

    cout << "Input the size you want to generator: ";
    cin >> size;

    frac *ptrArrPs = genArrayPS(size);

    cout << '\n';

    // Hàm tạo ra
    genNumber(ptrArrPs, size);

    printArray(ptrArrPs, size);

    freePtrPS(ptrArrPs);
    return 0;
}