#include "QuaiVat.h"
#include <iostream>

using namespace std;

void QuaiVat::Nhap() {
	NhanVat::Nhap();
	cout << "Nhap loai quai vat (thong thuong, dau linh): ";
	getline(cin, phanLoai);
}

void QuaiVat::Xuat() {
	NhanVat::Xuat();
	cout << "Loai quai vat: " << phanLoai << endl;
}

float QuaiVat::tongSatThuong() {
	if (getPhanLoai() == "thong thuong") {
		satThuong = capDo * 3;
	}
	else if (getPhanLoai() == "dau linh") {
		satThuong = capDo * 7;
	}
	else return 0;
	cout << "Sat thuong cua quai vat la: " << satThuong << endl;
	return satThuong;
}