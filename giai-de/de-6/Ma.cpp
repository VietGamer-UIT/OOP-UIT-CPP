#include "Ma.h"
#include <iostream>

using namespace std;

void Ma::Nhap() {
	QuanCo::Nhap();
}

void Ma::Xuat() {
	QuanCo::Xuat();
}

void Ma::diChuyenQuanCo() {
	int dx[] = { 2, 2, -2, -2, 1, 1, -1, -1 };
	int dy[] = { 1, -1, 1, -1, 2, -2, 2, -2 };
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if ((mauSac == "trang" || mauSac == "den") && nx >= 1 && nx <= 10 && ny >= 1 && ny <= 9) {
			cout << "Di chuyen den (" << nx << ", " << ny << ")" << endl;
		}
	}
}