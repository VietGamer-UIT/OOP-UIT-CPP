#include "TuGiac.h"
#include <iostream>
using namespace std;

TuGiac::TuGiac() {
	for (int i = 0; i < 4; i++) {
		danhSachDiem.push_back(new Diem());
	}
}

void TuGiac::Nhap() {
	cout << "Nhap diem A(x, y): "; danhSachDiem[0]->Nhap();
	cout << "Nhap diem B(x, y): "; danhSachDiem[1]->Nhap();
	cout << "Nhap diem C(x, y): "; danhSachDiem[2]->Nhap();
	cout << "Nhap diem D(x, y): "; danhSachDiem[3]->Nhap();
}

void TuGiac::Xuat() {
	cout << "--------------------------------------------------" << endl;
	cout << "A(x, y): "; danhSachDiem[0]->Xuat();
	cout << "B(x, y): "; danhSachDiem[1]->Xuat();
	cout << "C(x, y): "; danhSachDiem[2]->Xuat();
	cout << "D(x, y): "; danhSachDiem[3]->Xuat();
}