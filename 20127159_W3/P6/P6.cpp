#include <iostream>
using namespace std;

bool KTSNT(int number) {
	if(number < 2) {
        return false;
    }

	for(int i=2; i <= (number / 2); ++i)
		if(number % i == 0) {
            return false;
        }
    return true;
}

int main() {
	
    unsigned int n;
	
    cout<<"Nhap vao so nguyen duong n: "; cin>>n;
	
    if (KTSNT(n) == true) {
		cout<< n << " la so nguyen to!";
    }
    else {
        cout<< n <<" khong la so nguyen to!";
    }	
    cout << endl;
    return 0;
}
