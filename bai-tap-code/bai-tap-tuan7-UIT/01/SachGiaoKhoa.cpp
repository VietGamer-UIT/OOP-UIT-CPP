#include "SachGiaoKhoa.h"
#include <iostream>
#include <string>

using namespace std;

void SachGiaoKhoa::Nhap() {
	Sach::Nhap();
	cout << "Nhap mon hoc: ";
	getline(cin, monHoc);
	cout << "Nhap ten nha xuat ban: ";
	getline(cin, nhaXuatBan);
}

void SachGiaoKhoa::Xuat() {
	Sach::Xuat();
	cout << "Mon hoc: " << monHoc << endl;
	cout << "Nha xuat ban: " << nhaXuatBan << endl;
	cout << "------------------------------" << endl;
}