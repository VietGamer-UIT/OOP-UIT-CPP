#include "DaGiac.h"
#include <iostream>
#include <vector>

using namespace std;

void DaGiac::tinhTien(int m, int n) {
	for (Diem* x : danhSachDiem) {
		x->tinhTien(m, n);
	}
	cout << "----- Hinh sau khi tinh tien -----" << endl;
	Xuat();
}

DaGiac::~DaGiac() {
	for (Diem* x : danhSachDiem) {
		delete x;
	}
	danhSachDiem.clear();
}