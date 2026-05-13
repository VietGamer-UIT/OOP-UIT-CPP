#include "DanhSach.h"
#include "NhanVat.h"
#include "NguoiChoi.h"
#include "QuaiVat.h"
#include <iostream>
#include <climits>

using namespace std;

void DanhSach::Nhap() {
	cout << "Nhap so luong nguoi choi va quai vat: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Nhap nguoi choi hay quai vat (1. Nguoi choi, 2. Quai vat): ";
		int loai; cin >> loai;
		cin.ignore();
		switch (loai) {
		case 1: {
			danhSach.push_back(new NguoiChoi());
			danhSach.back()->Nhap();
			break;
		}
		case 2: {
			danhSach.push_back(new QuaiVat());
			danhSach.back()->Nhap();
			break;
		}
		default: {
			cout << "Nhap sai, vui long nhap lai!" << endl;
			i--;
		}
		}
	}
}

void DanhSach::maxSatThuong() {
	float max = FLT_MIN;
	NhanVat* maxNhanVat = nullptr;
	for (NhanVat* x : danhSach) {
		if (x->tongSatThuong() > max) {
			max = x->tongSatThuong();
			maxNhanVat = x;
		}
	}
	if (maxNhanVat != nullptr) {
		cout << "Phan tu co muc sat thuong cao nhat la: ";
		maxNhanVat->Xuat();
	}
}

void DanhSach::soSanhSatThuong(NhanVat* a, NhanVat* b) {
	int heA = a->getHe(a->getMonPhai());
	int heB = b->getHe(b->getMonPhai());
	float satThuongAB = a->tongSatThuong() * NhanVat::heSo(heA, heB);
	float satThuongBA = b->tongSatThuong() * NhanVat::heSo(heB, heA);
	cout << "A danh B: " << satThuongAB << endl;
	cout << "B danh A: " << satThuongBA << endl;
}

void DanhSach::soSanhTrongDanhSach(int i, int j) {
	if (i >= 0 && i < danhSach.size() && j >= 0 && j < danhSach.size()) {
		cout << "\n--- SO SANH SAT THUONG ---" << endl;
		soSanhSatThuong(danhSach[i], danhSach[j]);
	}
	else {
		cout << "Vi tri so sanh khong hop le!" << endl;
	}
}

DanhSach::~DanhSach() {
	for (NhanVat* x : danhSach) {
		delete x;
	}
}