#include "QuanCo.h"
#include <iostream>

using namespace std;

void QuanCo::Nhap() {
	cout << "Nhap quan co, mau sac (Vi du: Tuong trang): ";
	cin >> quanCo >> mauSac;
	cout << "Nhap vi tri cua quan co " << quanCo << " " << mauSac << " (x, y): ";
	cin >> x >> y;
}

void QuanCo::Xuat() {
	cout << quanCo << " " << mauSac << " (" << x << ", " << y << ")" << endl;
}