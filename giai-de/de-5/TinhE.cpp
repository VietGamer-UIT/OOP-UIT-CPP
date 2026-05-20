#include "TinhE.h"
#include <iostream>

using namespace std;

void TinhE::Xuat() {
	cout << chiSo << " | Huong ngoai (E) - ";
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi nhiet tinh, nang dong, giao tiep tot, thich the hien ban than." << endl;
	}
	else if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong ngai giao tiep, khong thich su noi bat, thich duoc lam viec doc lap." << endl;
	}
	else {
		cout << "Khong xac dinh ro." << endl;;
	}
}

bool TinhE::isNguyCoCao() {
	return chiSo <= 30;
}