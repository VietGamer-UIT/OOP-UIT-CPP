#include "NhanVienVanPhong.h"
#include <iostream>

using namespace std;

void NhanVienVanPhong::Nhap() {
	NhanVien::Nhap();
	cout << "So ngay lam viec: ";
	cin >> soNgayLamViec;
}

void NhanVienVanPhong::Xuat() {
	NhanVien::Xuat();
}

void NhanVienVanPhong::tinhLuong() {
	luong = soNgayLamViec * 100000;
}