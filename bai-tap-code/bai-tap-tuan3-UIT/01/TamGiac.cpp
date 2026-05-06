#include "TamGiac.h"
#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

void TamGiac::Nhap() {
	cout << "Nhap toa do diem A: ";  a.Nhap();
	cout << "Nhap toa do diem B: "; b.Nhap();
	cout << "Nhap toa do diem C: "; c.Nhap();
}

void TamGiac::Xuat() const {
	cout << "Tam giac duoc tao boi 3 diem A, B, C" << endl;
	cout << "Toa do diem A: ";
	a.Xuat();
	cout << "\nToa do diem B: ";
	b.Xuat();
	cout << "\nToa do diem C: ";
	c.Xuat();
}

void TamGiac::TinhTien(int m, int n) {
    a.tinhTien(m, n);
	b.tinhTien(m, n);
	c.tinhTien(m, n);
}

void TamGiac::Quay(float rad) {
	a.Quay(rad);
	b.Quay(rad);
	c.Quay(rad);
}

void TamGiac::PhongTo(float k) {
	a.phongTo(k);
	b.phongTo(k);
	c.phongTo(k);
}

void TamGiac::ThuNho(float t) {
	if (t > 0 && t < 1) {
		a.thuNho(t);
		b.thuNho(t);
		c.thuNho(t);
	}
}