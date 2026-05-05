#include "HinhThang.h"
#include <iostream>

using namespace std;

void HinhThang::Nhap() {
	cout << "Nhap toa do (x, y): ";
	cin >> x >> y;
	cout << "Nhap do dai day duoi: ";
	cin >> dayDuoi;
	cout << "Nhap do dai day tren: ";
	cin >> dayTren;
	cout << "Nhap do dai chieu cao: ";
	cin >> chieuCao;
	cout << "Nhap do lech day tren so voi day duoi: ";
	cin >> doLech;
}

void HinhThang::Xuat() {
	cout << "Hinh thang tai (" << x << ", " << y << "), day duoi = " << dayDuoi << ", day tren = " << dayTren << ", chieu cao = " << chieuCao << ", do lech = " << doLech << endl;
}

void HinhThang::veHinh() {
	cout << "\n--- TIEN HANH VE HINH ---" << endl;

	int h = (int)chieuCao;
	int dTren = (int)dayTren;
	int dDuoi = (int)dayDuoi;
	int lech = (int)doLech;

	// In từng dòng từ trên xuống dưới
	for (int i = 0; i < h; i++) {

		// 1. Tính toán khoảng trắng thụt vào ở đầu dòng
		int khoangTrang = 0;
		if (h > 1) {
			khoangTrang = lech * (h - 1 - i) / (h - 1);
		}

		// 2. Tính toán độ dài (số dấu *) của dòng hiện tại
		int soSao = dDuoi;
		if (h > 1) {
			soSao = dTren + (dDuoi - dTren) * i / (h - 1);
		}

		// 3. Tiến hành in ra màn hình
		for (int j = 0; j < khoangTrang; j++) {
			cout << "  "; // In 2 dấu cách để hình cân đối
		}
		for (int j = 0; j < soSao; j++) {
			cout << "* ";
		}
		cout << endl; // Xuống dòng
	}
}