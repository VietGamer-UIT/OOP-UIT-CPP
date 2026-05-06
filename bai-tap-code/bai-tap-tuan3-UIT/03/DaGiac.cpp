#include "DaGiac.h"
#include <iostream>

using namespace std;

DaGiac::DaGiac() {
	n = 0;
	dinh = nullptr;
}

DaGiac::~DaGiac() {
	if (dinh != nullptr) {
		delete[] dinh;
	}
}

void DaGiac::Nhap() {
	do {
		cout << "Nhap so dinh cua da giac (n >= 3) ";
		cin >> n;
		if (n < 3) cout << "Loi, da giac phai co it nhat 3 dinh\n";
	} while (n < 3);
	dinh = new Point[n];
	cout << "Nhap toa do " << n << " dinh: ";
	for (int i = 0; i < n; i++) {
		cout << "Dinh " << i + 1 << ": ";
		dinh[i].Nhap();
	}
}

void DaGiac::Xuat() const {
	if (n < 3) return;
	cout << "Da giac " << n << " dinh: ";
	for (int i = 0; i < n; i++) {
		dinh[i].Xuat();
		if (i < n - 1) cout << " -> ";
	}
	cout << "\n";
}

void DaGiac::tinhTien(int m, int n) {
	for (int i = 0; i < n; i++) {
		dinh[i].tinhTien(m, n);
	}
}

void DaGiac::Quay(float rad) {
	for (int i = 0; i < n; i++) {
		dinh[i].Quay(rad);
	}
}

void DaGiac::phongTo(float k_phong) {
	for (int i = 0; i < n; i++) {
		dinh[i].phongTo(k_phong);
	}
}

void DaGiac::thuNho(float k_thu) {
	if (k_thu != 0) {
		for (int i = 0; i < n; i++) {
			dinh[i].thuNho(k_thu);
		}
	}
	else {
		cout << "Loi: He so thu nho phai khac 0!\n";
	}
}

void DaGiac::veDaGiac() const {
	for (int i = 0; i < n; i++) {
		cout << " (*) Dinh " << i + 1 << ": ";
		dinh[i].Xuat();
		cout << "\n";
	}
	cout << "-------------------------------------------\n";
}