#include "Sach.h"
#include <iostream>
#include <string>

using namespace std;

void Sach::Nhap() {
	cout << "Nhap ten cuon sach: ";
	getline(cin, ten);
	cout << "Nhap ten tac gia: ";
	getline(cin, tacGia);
	cout << "Nhap nam phat hanh: ";
	cin >> namPhatHanh;
	cout << "Nhap so trang: ";
	cin >> soTrang;
	cin.ignore();
}

void Sach::Xuat() {
	cout << "------------------------------" << endl;
	cout << "Ten sach: " << ten << endl;
	cout << "Tac gia: " << tacGia << endl;
	cout << "Nam phat hanh: " << namPhatHanh << endl;
	cout << "So trang: " << soTrang << endl;
}