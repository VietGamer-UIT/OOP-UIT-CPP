#include "Toner.h"
#include <iostream>
#include <string>

using namespace std;

void Toner::Nhap() {
	string loai;
	cout << "Co su dung Toner hay khong: ";
	cin >> loai;
	if (loai == "Co") {
		coSuDung = true;
	}
	else {
		coSuDung = false;
	}
}

int Toner::getThoiGian() {
	if (coSuDung) {
		return thoiGian;
	}
	else {
		return 0;
	}
}

int Toner::getGiaTien() {
	if (coSuDung) {
		return giaTien;
	}
	else {
		return 0;
	}
}