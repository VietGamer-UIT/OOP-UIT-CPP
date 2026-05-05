#include "HinhChuNhat.h"
#include <iostream>

using namespace std;

void HinhChuNhat::Nhap() {
	cout << "Nhap toa do (x, y): ";
	cin >> x >> y;
	cout << "Nhap chieu dai: ";
	cin >> dayDuoi;
	dayTren = dayDuoi;
	doLech = 0;
	cout << "Nhap chieu rong: ";
	cin >> chieuCao;
}

void HinhChuNhat::Xuat() {
	cout << "Hinh chu nhat tai (" << x << ", " << y << "), chieu dai = " << dayDuoi << ", chieu rong = " << chieuCao << endl;
}