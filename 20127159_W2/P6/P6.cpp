#include <iostream>
using namespace std;

int main() {
	
	char name[100];
	float diemToan, diemLy, diemHoa, diemTrungBinh;
	cout << "Nhap ho va ten: "; cin.getline(name, 100);
	cout << "Nhap diem Toan: "; cin >> diemToan;
	cout << "Nhap diem Ly: "; cin >> diemLy;
	cout << "Nhap diem Hoa: "; cin >> diemHoa;
	diemTrungBinh = (diemToan + diemLy + diemHoa) / 3;

	cout << "Hoc sinh ten " << name << " la hoc sinh loai ";
	if (diemTrungBinh >= 9.0) {
		cout << "xuat sac";
	}
	else if (diemTrungBinh >= 8.0 && diemTrungBinh < 9.0) {
		cout << "gioi";
	}
	else if (diemTrungBinh >= 6.5 && diemTrungBinh < 8.0) {
		cout << "kha";
	}
	else if (diemTrungBinh >= 5.0 && diemTrungBinh < 6.5) {
		cout << "trung binh";
	}
	else if (diemTrungBinh >= 3.0 && diemTrungBinh < 5.0) {
		cout << "yeu";
	}
	else if (diemTrungBinh < 3.5) {
		cout << "kem";
	}
	return 0;
}