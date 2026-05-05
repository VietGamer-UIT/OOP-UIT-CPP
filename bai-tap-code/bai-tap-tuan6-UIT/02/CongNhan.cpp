#include "CongNhan.h"
#include <iostream>

using namespace std;

void CongNhan::Nhap() {
	People::Nhap();
	cout << "Nhap muc luong hang thang (trieu VND): ";
	cin >> luong;
	cin.ignore();
}

void CongNhan::Xuat() {
	People::Xuat();
	cout << "Muc luong hang thang (trieu VND): " << luong << endl;
}