#include "Diem.h"
#include <iostream>

using namespace std;

void Diem::Nhap() {
	cin >> x >> y;
}

void Diem::Xuat() {
	cout << "(" << x << ", " << y << ")" << endl;
}

void Diem::tinhTien(int m, int n) {
	x += m;
	y += n;
}