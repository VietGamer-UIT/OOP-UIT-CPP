#include "CaSi.h"
#include <iostream>

using namespace std;

void CaSi::Nhap() {
	People::Nhap();
	cout << "Nhap bai hat top 1: ";
	getline(cin, baiHatTop1);
	cout << "Nhap tien book show (trieu VND): ";
	cin >> tienBookShow;
	cin.ignore();
}

void CaSi::Xuat() {
	People::Xuat();
	cout << "Bai hat top 1:" << baiHatTop1 << endl;
	cout << "Tien book show (trieu VND): " << tienBookShow << endl;
}