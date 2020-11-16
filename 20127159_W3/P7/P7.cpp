#include<iostream>

using namespace std;

int main(){
    
    int m,n, dem = 0, tong = 0;
    cout << "Nhap hai so M va N, voi M < N" << endl;
    cout << "Nhap M: "; cin >> m;
    cout << "Nhap N: "; cin >> n;

    for (int i = m; i <= n; i++) {
        if (i % 2 == 0) {
            dem += 1;
            tong += i;
        }
        
    }

    cout <<"So luong so chan tu " << m <<" den " << n << " la: " << dem << endl;
    cout <<"Tong cac so chan tu " << m <<" den " << n << " la: " << tong << endl;
    return 0;
}