#include "Serum.h"
#include <iostream>
#include <string>

using namespace std;

void Serum::Nhap() {
	string loai;
	cout << "Co su dung Serum hay khong: ";
	cin >> loai;
	if (loai == "Co") {
		coSuDung = true;
	}
	else {
		coSuDung = false;
	}
}

int Serum::getThoiGian() {
	if (coSuDung) {
		return thoiGian;
	}
	else {
		return 0;
	}
}

int Serum::getGiaTien() {
	if (coSuDung) {
		return giaTien;
	}
	else {
		return 0;
	}
}