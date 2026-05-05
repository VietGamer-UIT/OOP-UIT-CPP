#include "HinhVuong.h"
#include <iostream>

using namespace std;

void HinhVuong::Nhap() {
	cout << "Nhap toa do (x, y): ";
	cin >> x >> y;
	cout << "Nhap do dai canh: ";
	cin >> dayDuoi;
	dayTren = dayDuoi;
	doLech = 0;
	chieuCao = dayDuoi;
}

void HinhVuong::Xuat() {
	cout << "Hinh vuong tai (" << x << ", " << y << "), do dai canh = " << dayDuoi << endl;
}