#include "TinhN.h"
#include <iostream>

using namespace std;

void TinhN::Xuat() {
	cout << chiSo << " | Bat on cam xuc (N) - ";
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong co cac cam xuc tieu cuc nhu: lo lang, buc boi, tu ti, yeu duoi va kha nang chiu ap luc kem." << endl;
	}
	else if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong kiem soat duoc cam xuc, ung pho voi cang thang tot, it bi ben ngoai anh huong den tam trang cua ban than." << endl;
	}
	else {
		cout << "Khong xac dinh ro." << endl;
	}
}

bool TinhN::isNguyCoCao() {
	return chiSo >= 70;
}