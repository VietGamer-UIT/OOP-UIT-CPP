#include "DanhSach.h"
#include <iostream>
#include <vector>

using namespace std;

void DanhSach::Nhap() {
	cout << "Nhap so luong nguoi trong danh sach: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		Nguoi* ng = new Nguoi();
		ng->Nhap();
		danhSach.push_back(ng);
	}
}

void DanhSach::xemThongTinMotNguoi() {
	if (n > 1) {
		int viTri;
		cout << "Nhap vi tri index cua nguoi can xem: ";
		cin >> viTri;
		if (viTri >= 0 && viTri < danhSach.size()) {
			danhSach[viTri]->Xuat();
		}
		else {
			cout << "Vi tri khong hop le!" << endl;
			return;
		}
	}
}

void DanhSach::danhSachNguyCoCao() {
	for (Nguoi* x : danhSach) {
		x->kiemTraNguyCoCao();
	}
}

void DanhSach::Xuat() {
	for (Nguoi* x : danhSach) {
		x->Xuat();
	}
}

DanhSach::~DanhSach() {
	for (Nguoi* x : danhSach) {
		delete x;
	}
}
