#include "Fraction.h"
Fraction *genArrayPS(int size) {
    Fraction *ptrArrayPS = new Fraction[size];
    return ptrArrayPS;
}

void freePtrPS(Fraction *ptrArrPS) {
    delete[] ptrArrPS;
}

bool genNumber(frac *ptrArrPS, int size) {
    // ! Biến đếm mặc địch cho tử chạy từ 2 -> INF
    int i = 2;

    // ! Biến đếm index cho array chứa Phân số
    int count = 0;

    while (count < size) {
        // ! Gen mẫu, chạy từ (TỬ + 1 -> TỬ * 2)
        for (int j = i + 1; j < (i * 2); j++) {
            ptrArrPS[count].tu = i;

            ptrArrPS[count].mau = j;

            // ! Xong phân số thì nhích index lên 1 và sáng phân số tiếp theo
            count++;

            // ! Nếu mà count ? size thì break thôi :D
            if (count >= size) {
                break;
            }
        }
        // ! Tăng tử lên 1
        i++;
    }
    return true;
}

void printArray(Fraction *ptrPS, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "The fraction at [" << i << "] is: " << ptrPS[i].tu << "/" << ptrPS[i].mau << endl;
    }
}