#include "DanhSach.h"
#include "Ma.h"
#include "Phao.h"
#include "Si.h"
#include "Tot.h"
#include "Tuong.h"
#include "TuongChinh.h"
#include "Xe.h"
#include <iostream>
#include <vector>

using namespace std;

void DanhSach::Nhap() {
	QuanCo* qc1 = new TuongChinh("Tuong", "trang", 1, 5);
	QuanCo* qc2 = new TuongChinh("Tuong", "den", 10, 5);
	QuanCo* qc3_1 = new Si("Si", "trang", 1, 4);
	QuanCo* qc3_2 = new Si("Si", "trang", 1, 6);
	QuanCo* qc4_1 = new Si("Si", "den", 10, 4);
	QuanCo* qc4_2 = new Si("Si", "den", 10, 6);
	QuanCo* qc5_1 = new Tuong("Tuong", "trang", 1, 3);
	QuanCo* qc5_2 = new Tuong("Tuong", "trang", 1, 7);
	QuanCo* qc6_1 = new Tuong("Tuong", "den", 10, 3);
	QuanCo* qc6_2 = new Tuong("Tuong", "den", 10, 7);
	QuanCo* qc7_1 = new Ma("Ma", "trang", 1, 2);
	QuanCo* qc7_2 = new Ma("Ma", "trang", 1, 8);
	QuanCo* qc8_1 = new Ma("Ma", "den", 10, 2);
	QuanCo* qc8_2 = new Ma("Ma", "den", 10, 8);
	QuanCo* qc9_1 = new Xe("Xe", "trang", 1, 1);
	QuanCo* qc9_2 = new Xe("Xe", "trang", 1, 9);
	QuanCo* qc10_1 = new Xe("Xe", "den", 10, 1);
	QuanCo* qc10_2 = new Xe("Xe", "den", 10, 9);
	QuanCo* qc11_1 = new Phao("Phao", "trang", 3, 2);
	QuanCo* qc11_2 = new Phao("Phao", "trang", 3, 8);
	QuanCo* qc12_1 = new Phao("Phao", "den", 8, 2);
	QuanCo* qc12_2 = new Phao("Phao", "den", 8, 8);
	QuanCo* qc13_1 = new Tot("Tot", "trang", 4, 1);
	QuanCo* qc13_2 = new Tot("Tot", "trang", 4, 3);
	QuanCo* qc13_3 = new Tot("Tot", "trang", 4, 5);
	QuanCo* qc13_4 = new Tot("Tot", "trang", 4, 7);
	QuanCo* qc13_5 = new Tot("Tot", "trang", 4, 9);
	QuanCo* qc14_1 = new Tot("Tot", "den", 7, 1);
	QuanCo* qc14_2 = new Tot("Tot", "den", 7, 3);
	QuanCo* qc14_3 = new Tot("Tot", "den", 7, 5);
	QuanCo* qc14_4 = new Tot("Tot", "den", 7, 7);
	QuanCo* qc14_5 = new Tot("Tot", "den", 7, 9);
	danhSach.push_back(qc1);
	danhSach.push_back(qc2);
	danhSach.push_back(qc3_1);
	danhSach.push_back(qc3_2);
	danhSach.push_back(qc4_1);
	danhSach.push_back(qc4_2);
	danhSach.push_back(qc5_1);
	danhSach.push_back(qc5_2);
	danhSach.push_back(qc6_1);
	danhSach.push_back(qc6_2);
	danhSach.push_back(qc7_1);
	danhSach.push_back(qc7_2);
	danhSach.push_back(qc8_1);
	danhSach.push_back(qc8_2);
	danhSach.push_back(qc9_1);
	danhSach.push_back(qc9_2);
	danhSach.push_back(qc10_1);
	danhSach.push_back(qc10_2);
	danhSach.push_back(qc11_1);
	danhSach.push_back(qc11_2);
	danhSach.push_back(qc12_1);
	danhSach.push_back(qc12_2);
	danhSach.push_back(qc13_1);
	danhSach.push_back(qc13_2);
	danhSach.push_back(qc13_3);
	danhSach.push_back(qc13_4);
	danhSach.push_back(qc13_5);
	danhSach.push_back(qc14_1);
	danhSach.push_back(qc14_2);
	danhSach.push_back(qc14_3);
	danhSach.push_back(qc14_4);
	danhSach.push_back(qc14_5);
}

void DanhSach::Xuat() {
	for (int i = 0; i < danhSach.size(); i++) {
		cout << i + 1 << ". ";
		danhSach[i]->Xuat();
	}
	cout << "-----------------------------------------" << endl;
	cout << "Nhap so thu tu de chon quan co: ";
	int stt; cin >> stt;
	cin.ignore();
	if (stt >= 1 && stt <= danhSach.size()) {
		int index = stt - 1;
		danhSach[index]->Xuat();
		danhSach[index]->diChuyenQuanCo();
	}
}

DanhSach::~DanhSach() {
	for (QuanCo* x : danhSach) {
		delete x;
	}
}