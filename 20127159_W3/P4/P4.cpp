#include<iostream>

using namespace std;

int max(int);
int min(int);

int main() {
    int n;
    cout << "Nhap vao so nguyen duong: ";
    cin >> n;
    cout << "Chu so lon nhat la: " << max(n) << endl;
    cout << "Chu so nho nhat la: " << min(n) << endl;
    return 0;
}

int max(int n) {
    int max = 0;
    while (n != 0) {
        int temp = n % 10;
        n /= 10;
        if (temp > max){
            max = temp; 
        }
    }
    return max;   
}

int min(int n)  {
    int min = 9;
    while (n != 0) {
        int temp = n % 10;
        n /= 10;
        if (temp < min) {
            min = temp; 
        }
    }
    return min;
}