#include "TapChi.h"
#include <iostream>
#include <string>

using namespace std;

void TapChi::Nhap() {
	Sach::Nhap();
	cout << "Nhap noi cong bo: ";
	getline(cin, noiCongBo);
}

void TapChi::Xuat() {
	Sach::Xuat();
	cout << "Noi cong bo: " << noiCongBo << endl;
	cout << "------------------------------" << endl;
}