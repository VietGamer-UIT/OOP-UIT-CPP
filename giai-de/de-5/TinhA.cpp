#include "TinhA.h"
#include <iostream>

using namespace std;

void TinhA::Xuat() {
	cout << chiSo << " | Hoa dong de chiu (A) - ";
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong than thien, coi mo, dong cam voi moi nguoi nhung nhieu khi 'thieu chinh kien'." << endl;
	}
	else if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong dat loi ich cua ban than len tren, it dong cam, chia se voi dong nghiep, co tinh canh tranh cao." << endl;
	}
	else {
		cout << "Khong xac dinh ro." << endl;
	}
}