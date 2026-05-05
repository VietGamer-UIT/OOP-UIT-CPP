#include "NhanVienSanXuat.h"
#include <iostream>

using namespace std;

void NhanVienSanXuat::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap muc luong can ban (VND): ";
	cin >> luongCanBan;
	cout << "Nhap so luong san pham da san xuat: ";
	cin >> soSanPham;
}

void NhanVienSanXuat::Xuat() {
	NhanVien::Xuat();
}

void NhanVienSanXuat::tinhLuong() {
	luong = luongCanBan + soSanPham * 5000;
}