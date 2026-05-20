#include "TinhO.h"
#include <iostream>

using namespace std;

void TinhO::Xuat() {
	cout << chiSo << " | San sang trai nghiem (O) - ";
	if (chiSo >= 70) {
		cout << "Nguoi co diem cao o yeu to nay thuong la nguoi thich nhung y tuong moi, thich hieu biet nhieu linh vuc nhung dong thoi cung thich tu do, khong thich bi rang buoc..." << endl;
	}
	else if (chiSo <= 30) {
		cout << "Nguoi co diem thap o yeu to nay thuong kha bao thu, kho tiep nhan nhung y tuong moi, la. Ho thich su on dinh, quen thuoc va thuc te." << endl;
	}
	else {
		cout << "Khong xac dinh ro." << endl;
	}
}