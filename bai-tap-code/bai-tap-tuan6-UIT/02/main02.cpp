#include "People.h"
#include "CaSi.h"
#include "NgheSi.h"
#include "CongNhan.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<People*> danhSach;
	cout << "Nhap so luong nguoi tham gia: ";
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		People* p = nullptr;
		cout << "Nhap thong tin nguoi thu " << i + 1 << ": " << endl;
		cout << "(1. Hoc sinh, 2. Sinh vien, 3. Cong nhan, 4. Nghe si, 5. Ca si)" << endl;
		int loai;
		cin >> loai;
		cin.ignore();
		switch (loai) {
		case 1:
			p = new HocSinh();
			break;
		case 2:
			p = new SinhVien();
			break;
		case 3:
			p = new CongNhan();
			break;
		case 4:
			p = new NgheSi();
			break;
		case 5:
			p = new CaSi();
			break;
		default:
			return 0;
		}
		p->Nhap();
		danhSach.push_back(p);
	}
	cout << "----- Danh sach -----" << endl;
	for (People* x : danhSach) {
		x->Xuat();
	}
	for (People* x : danhSach) {
		delete x;
	}
	danhSach.clear();
	return 0;
}