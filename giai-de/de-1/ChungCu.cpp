#include "ChungCu.h"
#include <iostream>

using namespace std;

void ChungCu::Nhap() {
	cout << "Nhap ten nguoi quan ly: ";
	getline(cin, tenQL);
	cout << "Nhap ten chung cu: ";
	getline(cin, ten);
	cout << "Nhap so tang: ";
	cin >> soTang;
	cout << "Nhap dien tich chung cu: ";
	cin >> dienTich;
	cin.ignore();
}

void ChungCu::guiThongBao() {
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << tenQL << " - " << "Chung cu " << ten << " - " << soHuu << endl;
}