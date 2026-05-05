#include "People.h"
#include <string>
#include <iostream>

using namespace std;

void People::Nhap() {
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap ngay sinh (dd/mm/yy): ";
	getline(cin, ngaySinh);
}

void People::Xuat() {
	cout << "Ho ten: " << hoTen << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
}