#include "ChongNang.h"
#include <iostream>
#include <string>

using namespace std;

void ChongNang::Nhap() {
	string loai;
	cout << "Co su dung kem chong nang hay khong: ";
	cin >> loai;
	if (loai == "Co") {
		coSuDung = true;
	}
	else {
		coSuDung = false;
	}
}

int ChongNang::getThoiGian() {
	if (coSuDung) {
		return thoiGian;
	}
	else {
		return 0;
	}
}

int ChongNang::getGiaTien() {
	if (coSuDung) {
		return giaTien;
	}
	else {
		return 0;
	}
}