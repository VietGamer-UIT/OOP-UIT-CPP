#include "TamGiac.h"
#include <iostream>
using namespace std;

TamGiac::TamGiac() {
	for (int i = 0; i < 3; i++) {
		danhSachDiem.push_back(new Diem());
	}
}

void TamGiac::Nhap() {
	cout << "Nhap diem A(x, y): "; danhSachDiem[0]->Nhap();
	cout << "Nhap diem B(x, y): "; danhSachDiem[1]->Nhap();
	cout << "Nhap diem C(x, y): "; danhSachDiem[2]->Nhap();
}

void TamGiac::Xuat() {
	cout << "--------------------------------------------------" << endl;
	cout << "A(x, y): "; danhSachDiem[0]->Xuat();
	cout << "B(x, y): "; danhSachDiem[1]->Xuat();
	cout << "C(x, y): "; danhSachDiem[2]->Xuat();
}