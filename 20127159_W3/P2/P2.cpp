#include <iostream>

using namespace std;

int main() {
    int n, num = 0;

    cout << "Nhap so nguyen: "; cin >> n;

    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }

    for (int i = num; i > 0; i /= 10) {
        switch (i % 10)
        {
        case 0:
            cout << "Khong ";
            break;
        case 1:
            cout << "Mot ";
            break;
        case 2:
            cout << "Hai ";
            break;
        case 3:
            cout << "Ba ";
            break;
        case 4:
            cout << "Bon ";
            break;
        case 5:
            cout << "Nam ";
            break;
        case 6:
            cout << "Sau ";
            break;
        case 7:
            cout << "Bay ";
            break;
        case 8:
            cout << "Tam ";
            break;
        case 9:
            cout << "Chin ";
            break;
        }
    }
    cout << endl;
    return 0;
}