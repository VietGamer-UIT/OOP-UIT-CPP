#include "KhachHang.h"
#include "TayTrang.h"
#include "RuaMat.h"
#include "MatNa.h"
#include "Toner.h"
#include "Serum.h"
#include "KemDuong.h"
#include "ChongNang.h"
#include <iostream>
#include <string>

using namespace std;

KhachHang::KhachHang() {
	quyTrinh[0] = new TayTrang();
	quyTrinh[1] = new RuaMat();
	quyTrinh[2] = new MatNa();
	quyTrinh[3] = new Toner();
	quyTrinh[4] = new Serum();
	quyTrinh[5] = new KemDuong();
	quyTrinh[6] = new ChongNang();
}

void KhachHang::Nhap() {
	cout << "Nhap ho ten khach hang: ";
	getline(cin, hoTen);
	for (int i = 0; i < 7; i++) {
		quyTrinh[i]->Nhap();
	}
}

int KhachHang::tongTien() {
	int tong = 0;
	for (int i = 0; i < 7; i++) {
		tong += quyTrinh[i]->getGiaTien();
	}
	return tong;
}

int KhachHang::tongThoiGian() {
	int tong = 0;
	for (int i = 0; i < 7; i++) {
		tong += quyTrinh[i]->getThoiGian();
	}
	return tong;
}

void KhachHang::Xuat() {
	cout << "\n-------------------------------------------------\n";
	cout << "Khach hang: " << hoTen << endl;
	for (int i = 0; i < 7; i++) {
		quyTrinh[i]->Xuat();
	}
	cout << "Tong tien: " << tongTien() << " nghin VND\n";
	cout << "Tong thoi gian: " << tongThoiGian() << " phut\n";
}

KhachHang::~KhachHang() {
	for (int i = 0; i < 7; i++) {
		delete quyTrinh[i];
	}
}