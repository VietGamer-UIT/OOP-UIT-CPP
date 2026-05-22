#include "Tuong.h"
#include <iostream>

using namespace std;

void Tuong::Nhap() {
	QuanCo::Nhap();
}

void Tuong::Xuat() {
	QuanCo::Xuat();
}

void Tuong::diChuyenQuanCo() {
	int dx[] = { 2, 2, -2, -2 };
	int dy[] = { 2, -2, -2, 2 };
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (mauSac == "trang" && nx <= 5 && nx >= 1 && ny >= 1 && ny <= 9) {
			cout << "Di chuyen den (" << nx << ", " << ny << ")" << endl;
		}
		else if (mauSac == "den" && nx >= 6 && nx <= 10 && ny >= 1 && ny <= 9) {
			cout << "Di chuyen den (" << nx << ", " << ny << ")" << endl;
 		}
	}
}