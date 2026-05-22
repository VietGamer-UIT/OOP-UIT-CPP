#include "Xe.h"
#include <iostream>

using namespace std;

void Xe::Nhap() {
	QuanCo::Nhap();
}

void Xe::Xuat() {
	QuanCo::Xuat();
}

void Xe::diChuyenQuanCo() {
	for (int i = 1; i <= 10; i++) {
		if (i != x) {
			cout << "Di chuyen den (" << i << ", " << y << ")" << endl;
		}
	}
	for (int i = 1; i <= 9; i++) {
		if (i != y) {
			cout << "Di chuyen den (" << x << ", " << i << ")" << endl;
		}
	}
}