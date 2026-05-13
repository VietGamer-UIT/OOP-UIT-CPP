#include "NguoiChoi.h"
#include <iostream>

using namespace std;

void NguoiChoi::Nhap() {
	NhanVat::Nhap();
}

void NguoiChoi::Xuat() {
	NhanVat::Xuat();
}

float NguoiChoi::tongSatThuong() {
	satThuong = capDo * 5;
	cout << "Sat thuong cua nguoi choi la: " << satThuong << endl;
	return satThuong;
}