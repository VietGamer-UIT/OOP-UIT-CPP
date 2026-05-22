#include "TuongChinh.h"
#include <iostream>

using namespace std;

void TuongChinh::Nhap() {
	QuanCo::Nhap();
}

void TuongChinh::Xuat() {
	QuanCo::Xuat();
}

void TuongChinh::diChuyenQuanCo() {
	int dx[] = { -1, 0, 0, 1 };
	int dy[] = { 0, -1, 1, 0 };
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (mauSac == "trang" && nx >= 1 && nx <= 3 && ny >= 4 && ny <= 6) {
			cout << "Di chuyen den (" << nx << ", " << ny << ")" << endl;
		}
		else if (mauSac == "den" && nx >= 8 && nx <= 10 && ny >= 4 && ny <= 6) {
			cout << "Di chuyen den (" << nx << ", " << ny << ")" << endl;
		}
	}
}