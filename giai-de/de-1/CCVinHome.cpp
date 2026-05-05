#include "CCVinHome.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void CCVinHome::Nhap() {
	ChungCu::Nhap();
	soHuu = "Vinhomes";
}

void CCVinHome::guiThongBao() {
	ChungCu::guiThongBao();
}

void CCVinHome::tienPhong() {
	if (dienTich > 600) {
		soTien = (rand() % 6 + 10) * soTang * 6;
	}
	else {
		soTien = (rand() % 5 + 6) * soTang * 6;
	}
	cout << "So tien ban quan ly chung cu Lang Dai Hoc thu ve moi thang: " << soTien << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
}