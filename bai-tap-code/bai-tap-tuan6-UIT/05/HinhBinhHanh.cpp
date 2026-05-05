#include "HinhBinhHanh.h"
#include <iostream>

using namespace std;

void HinhBinhHanh::Nhap() {
	cout << "Nhap toa do (x, y): ";
	cin >> x >> y;
	cout << "Nhap do dai day: ";
	cin >> dayDuoi;
	dayTren = dayDuoi;
	cout << "Nhap do dai chieu cao: ";
	cin >> chieuCao;
	cout << "Nhap do lech day tren so voi day duoi: ";
	cin >> doLech;
}

void HinhBinhHanh::Xuat() {
	cout << "Hinh binh hanh tai (" << x << ", " << y << "), do dai day = " << dayDuoi << ", chieu cao = " << chieuCao << ", " << ", do lech = " << doLech << endl;
}