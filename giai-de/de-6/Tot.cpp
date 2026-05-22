#include "Tot.h"
#include <iostream>

using namespace std;

void Tot::Nhap() {
	QuanCo::Nhap();
}

void Tot::Xuat() {
	QuanCo::Xuat();
}

void Tot::diChuyenQuanCo() {
	if (mauSac == "trang" && x >= 6 && x <= 10) {
		if (x != 10) cout << "Di thang len (" << x + 1 << ", " << y << ")" << endl;
		if (y >= 2 && y <= 9) {
			cout << "Di ngang qua trai (" << x << ", " << y - 1 << ")" << endl;
		}
		if (y <= 8 && y >= 1) {
			cout << "Di ngang qua phai (" << x << ", " << y + 1 << ")" << endl;
		}
	}
	else if (mauSac == "trang" && x < 6 && x >= 1) {
		cout << "Di thang len (" << x + 1 << ", " << y << ")" << endl;
	}
	else if (mauSac == "den" && x > 5 && x <= 10) {
		cout << "Di thang len (" << x - 1 << ", " << y << ")" << endl;
	}
	else if (mauSac == "den" && x <= 5 && x >= 1) {
		if (x != 1) cout << "Di thang len (" << x - 1 << ", " << y << ")" << endl;
		if (y >= 2 && y <= 9) {
			cout << "Di ngang qua trai (" << x << ", " << y - 1 << ")" << endl;
		}
		if (y <= 8 && y >= 1) {
			cout << "Di ngang qua phai (" << x << ", " << y + 1 << ")" << endl;
		}
	}
	else return;
}