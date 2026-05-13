#include "KyHieuAmNhac.h"
#include <iostream>

using namespace std;

void KyHieuAmNhac::Nhap() {
	cout << "Truong do: ";
	cin >> truongDo;
	cin.ignore();
	cout << "Not: ";
	getline(cin, kyHieuNot);
}

float KyHieuAmNhac::getTruongDo() { return truongDo; }
string KyHieuAmNhac::getKyHieuNot() { return kyHieuNot; }