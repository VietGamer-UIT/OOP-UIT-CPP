#include "NhanVat.h"
#include <iostream>

using namespace std;

void NhanVat::Nhap() {
	cout << "Nhap cap do: ";
	cin >> capDo;
	cin.ignore();
	cout << "Nhap mon phai: ";
	getline(cin, monPhai);
}

void NhanVat::Xuat() {
	cout << "Cap do: " << capDo << endl;
	cout << "Mon phai: " << monPhai << endl;
}

int NhanVat::getHe(string mp) {
	//1: Kim, 2: Thủy, 3: Thổ, 4: Mộc, 5: Hỏa
	if (mp == "Thieu Lam" or mp == "Thien Vuong bang") return 1;
	if (mp == "Nga My" or mp == "Thuy Yen mon") return 2;
	if (mp == "Con Lon" or mp == "Vo Dang") return 3;
	if (mp == "Ngu Doc giao" or mp == "Duong Mon") return 4;
	if (mp == "Cai Bang" or mp == "Thien Nhan giao") return 5;
	return 0;
}

float NhanVat::heSo(int h1, int h2) {
	if ((h1 == 5 && h2 == 3) || (h1 == 3 && h2 == 1) || (h1 == 1 && h2 == 2) || (h1 == 2 && h2 == 4) || (h1 == 4 && h2 == 5)) {
		return 1.1;
	}
	if ((h1 == 1 && h2 == 4) || (h1 == 4 && h2 == 3) || (h1 == 3 && h2 == 2) || (h1 == 2 && h2 == 5) || (h1 == 5 && h2 == 1)) {
		return 1.2;
	}
	if ((h1 == 4 && h2 == 1) || (h1 == 3 && h2 == 4) || (h1 == 2 && h2 == 3) || (h1 == 5 && h2 == 2) || (h1 == 1 && h2 == 5)) {
		return 0.8;
	}
	return 1.0;
}