#include "NhanVien.h"
#include <iostream>
#include <string>

using namespace std;

void NhanVien::Nhap() {
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, hoTen);
	cout << "Nhap ngay sinh nhan vien (dd/mm/yy): ";
	getline(cin, ngaySinh);
}

void NhanVien::Xuat() {
	cout << "Ho ten nhan vien: " << hoTen << endl;
	cout << "Ngay sinh nhan vien: " << ngaySinh << endl;
	cout << "Muc luong nhan vien: " << luong << " VND" << endl;
}