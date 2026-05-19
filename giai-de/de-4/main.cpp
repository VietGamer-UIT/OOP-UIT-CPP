#include "KhachHang.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int soLuongKH;
	cout << "Nhap so luong khach hang hom nay cua Spa: ";
	cin >> soLuongKH;
	cin.ignore();
	vector<KhachHang*> danhSach;
	for (int i = 0; i < soLuongKH; i++) {
		cout << "Nhap thong tin khach hang thu " << i + 1 << endl;
		KhachHang* kh = new KhachHang();
		kh->Nhap();
		danhSach.push_back(kh);
	}
	for (int i = 0; i < soLuongKH; i++) {
		danhSach[i]->Xuat();
	}
	if (soLuongKH > 0) {
		int max = danhSach[0]->tongTien();
		int viTriMax = 0;
		for (int i = 1; i < soLuongKH; i++) {
			if (danhSach[i]->tongTien() > max) {
				max = danhSach[i]->tongTien();
				viTriMax = i;
			}
		}
		cout << "Khach hang chi nhieu tien nhat: ";
		danhSach[viTriMax]->Xuat();
	}
	for (KhachHang* x : danhSach) {
		delete x;
	}
	return 0;
}