#include "NgheSi.h"
#include <iostream>

using namespace std;

void NgheSi::Nhap() {
	People::Nhap();
	cout << "Nhap linh vuc hoat dong: ";
	getline(cin, linhVuc);
	cout << "Nhap nam kinh nghiem: ";
	cin >> namKinhNghiem;
	cin.ignore();
}

void NgheSi::Xuat() {
	People::Xuat();
	cout << "Linh vuc hoat dong: " << linhVuc << endl;
	cout << "Nam kinh nghiem: " << namKinhNghiem << endl;
}