#include "TinhC.h"
#include <iostream>

using namespace std;

void TinhC::Xuat() {
	cout << chiSo << " | Tu chu tan tam (C) - ";
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi cham chi, co kha nang chiu ap luc tot. Ho thuong la nguoi gan bo, trung thanh voi to chuc." << endl;
	}
	else if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong de bo cuoc, kha nang chiu ap luc va tuan thu ky luat cua to chuc kem." << endl;
	}
	else {
		cout << "Khong xac dinh ro." << endl;
	}
}

bool TinhC::isNguyCoCao() {
	return chiSo <= 30;
}