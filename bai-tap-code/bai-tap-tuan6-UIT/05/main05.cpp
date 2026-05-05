#include "HinhThang.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Nhap loai hinh ban muon (1. Hinh thang, 2. Hinh binh hanh, 3. Hinh chu nhat, 4. Hinh vuong): ";
	int n; cin >> n;
	HinhThang* h = nullptr;
	switch (n) {
	case 1: {
		h = new HinhThang();
		break;
	}
	case 2: {
		h = new HinhBinhHanh();
		break;
	}
	case 3: {
		h = new HinhChuNhat();
		break;
	}
	default: {
		h = new HinhVuong();
	}
	}
	if (h != nullptr) {
		h->Nhap();
		h->Xuat();
		h->veHinh();
		delete h;
	}
	return 0;
}