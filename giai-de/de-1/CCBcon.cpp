#include "CCBcon.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void CCBcon::Nhap() {
	ChungCu::Nhap();
	soHuu = "Bcons";
}

void CCBcon::guiThongBao() {
	ChungCu::guiThongBao();
}

void CCBcon::tienPhong() {
	if (dienTich > 600) {
		soTien = (rand() % 5 + 8) * soTang * 6;
	}
	else {
		soTien = (rand() % 4 + 5) * soTang * 6;
	}
	cout << "So tien ban quan ly chung cu Lang Dai Hoc thu ve moi thang: " << soTien << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
}