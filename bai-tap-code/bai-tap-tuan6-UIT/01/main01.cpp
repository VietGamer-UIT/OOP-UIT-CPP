#include "NhanVien.h"
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<NhanVien*> danhSachNhanVien;
	int soLuong;
	cout << "Nhap so luong nhan vien: ";
	cin >> soLuong;
	cin.ignore();
	for (int i = 0; i < soLuong; i++) {
		int loai;
		cout << "Nhan vien thu " << i + 1 << ": " << endl;
		cout << "Nhap loai nhan vien (1. Van Phong, 2. San Xuat): ";
		cin >> loai;
		cin.ignore();
		NhanVien* nv = nullptr;
		if (loai == 1) {
			nv = new NhanVienVanPhong();
		}
		else {
			nv = new NhanVienSanXuat();
		}
		nv->Nhap();
		nv->tinhLuong();
		cin.ignore();
		danhSachNhanVien.push_back(nv);
	}
	cout << "----- Danh sach nhan vien va luong -----" << endl;
	for (NhanVien* nv : danhSachNhanVien) {
		nv->Xuat();
	}
	for (NhanVien* nv : danhSachNhanVien) {
		delete nv;
	}
	danhSachNhanVien.clear();
	return 0;
}