#include <iostream>

struct PhanSo {
    int tu, mau;
};

int main() {
    /**
	 * ! Có thể bỏ comment ở cout để xem kết quả được in ra luôn :D
	 * ? Các biến có thể khó hiểu nên đọc kỹ comment ở ! và debug để hiểu sâu hơn
	 * ? Code dùng cấp phát động để gen nhưng bạn có thể hiểu như là tạo array gồm .. phần tử
	*/

    using namespace std;

    /**
     * ? 1 |
     * ? 2 | 3
     * ? 3 | 4 5
     * ? 4 | 5 6 7
     * ? 5 | 6 7 8 9
     * ? 6 | 7 8 9 10 11
     * ? 7 | 8 9 10 11 12 13
     * ? 8 | 9 10 11 12 13 14 15
     * ? 9 | 10 11 12 13 14 15 16 17
     * ? 10 | 11 12 13 14 15 16 17 18 19
    */

    // ! Biến đếm mặc địch cho tử chạy từ 2 -> INF
    int i = 2;

    // ! Biến đếm index cho array chứa Phân số
    int count = 0;

    // ! Size của array phân số <------------------------- Đổi size muôn gen ra bn phân số ở đây
    const int size = 20;

    PhanSo *ptrPS = new PhanSo[size];

    // Vòng lặp
    while (count < size) {
        // ! Gen mẫu, chạy từ (TỬ + 1 -> TỬ * 2)
        for (int j = i + 1; j < (i * 2); j++) {
            ptrPS[count].tu = i;
            cout << "ptrPS[" << count << "].tu: " << i << endl;
            ptrPS[count].mau = j;
            cout << "ptrPS[" << count << "].mau: " << j << endl;

            // ! Xong phân số thì nhích index lên 1 và sáng phân số tiếp theo
            count++;

            // ! Nếu mà count ? size thì break thôi :D
            if (count >= size) {
                break;
            }

            cout << '\n';
        }
        // ! Tăng tử lên 1
        i++;

        cout << "--Tu tang len 1--\n";
    }

    delete[] ptrPS;

    return 0;
}