#include "TestCandidate.h"
#include <iostream>
#include <string>

using namespace std;

void TestCandidate::Nhap() {
	getline(cin, id);
	getline(cin, name);
	getline(cin, ngaySinh);
	cin >> diemToan >> diemVan >> diemAnh;
	cin.ignore();
}

void TestCandidate::Xuat() {
	cout << id << " " << name << " " << ngaySinh << " " << diemToan << " " << diemVan << " " << diemAnh;
}

float TestCandidate::tongDiem() {
	return diemToan + diemVan + diemAnh;
}