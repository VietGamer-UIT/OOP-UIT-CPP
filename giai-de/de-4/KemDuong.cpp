#include "KemDuong.h"
#include <iostream>
#include <string>

using namespace std;

void KemDuong::Nhap() {
	string loai;
	cout << "Co su dung kem duong hay khong: ";
	cin >> loai;
	if (loai == "Co") {
		coSuDung = true;
	}
	else {
		coSuDung = false;
	}
}

int KemDuong::getThoiGian() {
	if (coSuDung) {
		return thoiGian;
	}
	else {
		return 0;
	}
}

int KemDuong::getGiaTien() {
	if (coSuDung) {
		return giaTien;
	}
	else {
		return 0;
	}
}