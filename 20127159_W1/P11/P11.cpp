#include <iostream>

using namespace std;

#define PI 3.14

float dienTichBeMatKhoiHop(float chieucao,float chieurong,float chieusau) {
	float dientich = ((chieusau * chieurong) + (chieucao * chieurong) + (chieucao * chieusau)) * 2;
	return dientich;
}

float theTichKhoiHop(float chieucao, float chieurong, float chieusau) {
	float thetich = chieucao * chieurong * chieusau;
	return thetich;
}

float dientichBeMatKhoiLapPhuong(float canh) {
	float dientich = (canh * canh) * 6;
	return dientich;
}

float theTichKhoiLapPhuong(float canh) {
	float thetich = canh * canh * canh;
	return thetich;
}

float dienTichBeMatKhoiTruTron(float bankinh, float chieucao) {
	float dientich = 2 * PI * bankinh * chieucao;
	return dientich;
}

float theTichKhoiTruTron(float bankinh, float chieucao) {
	float thetich = PI * bankinh * bankinh * chieucao;
	return thetich;
}

int main() {
	float chieucao,chieurong,chieusau,bankinh,canh;
	int luachon;
	cout << "--------------------------------------" << endl;
	cout << "| Tinh dien tich be mat khoi hop | 1 |" << endl;
	cout << "|------------------------------------|" << endl;
	cout << "| Tinh the tich khoi hop         | 2 |" << endl;
	cout << "|------------------------------------|" << endl;
	cout << "| Tinh dien tich khoi lap phuong | 3 |" << endl;
	cout << "|------------------------------------|" << endl;
	cout << "| Tinh the tich khoi lap phuong  | 4 |" << endl;
	cout << "|------------------------------------|" << endl;
	cout << "| Tinh dien tich khoi tru tron   | 5 |" << endl;
	cout << "|------------------------------------|" << endl;
	cout << "| Tinh the tich khoi tru tron    | 6 |" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Nhap su lua chon cua ban: ";
	while (true) {
		cin >> luachon;
		if (((luachon > 0) && (luachon < 7))) {
			break;
		}
		cout << "Moi ban nhap lai: ";
	}
	switch (luachon) {
	case 1:
		cin >> chieucao >> chieurong >> chieusau;
		cout << "Dien tich be mat khoi hop: " << dienTichBeMatKhoiHop(chieucao, chieurong, chieusau) << endl;
	case 2:
		cin >> chieucao >> chieurong >> chieusau;
		cout << "The tich khoi hop: " << theTichKhoiHop(chieucao, chieurong, chieusau);
	case 3:
		cin >> canh;
		cout << "Dien tich be mat khoi lap phuong: " << dientichBeMatKhoiLapPhuong(canh);
	case 4:
		cin >> canh;
		cout << "The tich khoi lap phuong: " << theTichKhoiLapPhuong(canh);
	case 5:
		cin >> bankinh >> chieucao;
		cout << "Dien tich be mat khoi tru tron: " << dienTichBeMatKhoiTruTron(bankinh, chieucao);
	case 6:
		cin >> bankinh >> chieucao;
		cout << "The tich be mat khoi tru tron: " << theTichKhoiTruTron(bankinh, chieucao);
	}

}
