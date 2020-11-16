#include <iostream>

using namespace std;

int main() {

    int number, sum = 0, count = 0;
    cout << "Nhap mot so nguyen duong: "; cin >> number;
    while (number < 0) {
        if (number > 0) {
            break;
        }
        cout << "Nhap mot so nguyen duong: "; cin >> number;
    }

    cout << "Cac uoc so la: ";

    for (int i = 1;i <= number;++i) { 
        if(number % i == 0) {
            sum += i;
            ++count;
            cout << i << " ";
        }
    }
    
    cout << endl;
    cout << "Co " << count << " uoc so" << endl;
    cout << "Tong cac uoc so la: " << sum << endl;
    return 0;
}