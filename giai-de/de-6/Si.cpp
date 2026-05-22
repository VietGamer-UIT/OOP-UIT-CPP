#include "Si.h"
#include <iostream>

using namespace std;

void Si::Nhap() {
	QuanCo::Nhap();
}

void Si::Xuat() {
	QuanCo::Xuat();
}

void Si::diChuyenQuanCo() {
	int dx[] = { 1, 1, -1, -1 };
	int dy[] = { 1, -1, 1, -1 };
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (mauSac == "trang") {
			if (nx >= 1 && nx <= 3 && ny >= 4 && ny <= 6) {
				cout << "Di chuyen den (" << nx << ", " << ny << ")" << endl;
			}
		}
		else if (mauSac == "den") {
			if (nx >= 8 && nx <= 10 && ny >= 4 && ny <= 6) {
				cout << "Di chuyen den (" << nx << ", " << ny << ")" << endl;
			}
		}
	}
}