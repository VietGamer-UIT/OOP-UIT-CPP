#include "Nguoi.h"
#include <iostream>

using namespace std;

Nguoi::Nguoi() {
	OCEAN[0] = new TinhO();
	OCEAN[1] = new TinhC();
	OCEAN[2] = new TinhE();
	OCEAN[3] = new TinhA();
	OCEAN[4] = new TinhN();
}

void Nguoi::Nhap() {
	char c;
	int diemO, diemC, diemE, diemA, diemN;
	cout << "Nhap danh gia tam ly (Oxx-Cxx-Exx-Axx-Nxx): ";
	cin >> c >> diemO >> c >> c >> diemC >> c >> c >> diemE >> c >> c >> diemA >> c >> c >> diemN;
	OCEAN[0]->setChiSo(diemO);
	OCEAN[1]->setChiSo(diemC);
	OCEAN[2]->setChiSo(diemE);
	OCEAN[3]->setChiSo(diemA);
	OCEAN[4]->setChiSo(diemN);
}

void Nguoi::Xuat() {
	for (int i = 0; i < 5; i++) {
		OCEAN[i]->Xuat();
	}
	cout << "-------------------------------------------------------\n";
}

void Nguoi::kiemTraNguyCoCao() {
	if (OCEAN[1]->getChiSo() <= 30 || OCEAN[4]->getChiSo() >= 70) {
		cout << "-----Nguoi co nguy co cao (doanh nghiep can luu y)-----\n";
		Nguoi::Xuat();
	}
}