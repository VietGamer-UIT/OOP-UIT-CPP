#include "Sach.h"
#include "SachGiaoKhoa.h"
#include "TieuThuyet.h"
#include "TapChi.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << "Nhap so luong sach: ";
	int n; cin >> n;
	cin.ignore();
	vector<Sach*> danhSach;
	for (int i = 0; i < n; i++) {
		cout << "Nhap the loai sach (1. Sach giao khoa, 2. Tieu thuyet, 3. Tap chi): ";
		int loai; cin >> loai;
		cin.ignore();
		Sach* s = nullptr;
		switch (loai) {
		case 1: {
			s = new SachGiaoKhoa();
			break;
		}
		case 2: {
			s = new TieuThuyet();
			break;
		}
		case 3: {
			s = new TapChi();
			break;
		}
		default:
			cout << "Loai sach khong hop le!" << endl;
			i--;
			continue;
		}
		s->Nhap();
		danhSach.push_back(s);
	}
	for (Sach* x : danhSach) {
		x->Xuat();
	}
	for (Sach* x : danhSach) {
		delete x;
	}
	danhSach.clear();
	return 0;
}