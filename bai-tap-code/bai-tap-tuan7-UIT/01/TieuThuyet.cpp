#include "TieuThuyet.h"
#include <iostream>
#include <string>

using namespace std;

void TieuThuyet::Nhap() {
	Sach::Nhap();
	cout << "Nhap the loai tieu thuyet: ";
	getline(cin, theLoai);
}

void TieuThuyet::Xuat() {
	Sach::Xuat();
	cout << "The loai: " << theLoai << endl;
	cout << "------------------------------" << endl;
}