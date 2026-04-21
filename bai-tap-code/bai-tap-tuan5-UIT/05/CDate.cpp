#include "CDate.h"
#include <iostream>
#include <cmath>

using namespace std;

bool laNamNhuan(int nam) {
	return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int soNgayCuaThang(int thang, int nam) {
	int soNgay[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (thang == 2 && laNamNhuan(nam)) {
		return 29;
	}
	return soNgay[thang];
}

int tinhNgay(const CDate& a) {
	int days = 0;
	for (int i = 1; i < a.nam; i++) {
		if (laNamNhuan(i)) {
			days += 366;
		}
		else {
			days += 365;
		}
	}
	for (int i = 1; i < a.thang; i++) {
		days += soNgayCuaThang(i, a.nam);
	}
	days += a.ngay;
	return days;
}

istream& operator>>(istream& in, CDate& cd) {
	cout << "Nhap ngay thang nam: ";
	in >> cd.ngay >> cd.thang >> cd.nam;
	return in;
}

ostream& operator<<(ostream& out, CDate cd) {
	out << cd.ngay << "/" << cd.thang << "/" << cd.nam << endl;
	return out;
}

CDate operator+(const CDate& cd, int d) {
	CDate res = cd;
	res.ngay += d;
	while (res.ngay > soNgayCuaThang(res.thang, res.nam)) {
		res.ngay -= soNgayCuaThang(res.thang, res.nam);
		res.thang++;
		if (res.thang > 12) {
			res.thang = 1;
			res.nam++;
		}
	}
	return res;
}

CDate operator-(const CDate& cd, int d) {
	CDate res = cd;
	res.ngay -= d;
	while (res.ngay <= 0) {
		res.thang--;
		if (res.thang < 1) {
			res.thang = 12;
			res.nam--;
		}
		res.ngay += soNgayCuaThang(res.thang, res.nam);
	}
	return res;
}

CDate& operator++(CDate& cd) {
	cd = cd + 1;
	return cd;
}

CDate operator++(CDate& cd, int) {
	CDate temp = cd;
	cd = cd + 1;
	return temp;
}

CDate operator--(CDate& cd, int) {
	CDate temp = cd;
	cd = cd - 1;
	return temp;
}

CDate& operator--(CDate& cd) {
	cd = cd - 1;
	return cd;
}

int operator-(const CDate& a, const CDate& b) {
	int tongNgayA = tinhNgay(a);
	int tongNgayB = tinhNgay(b);
	return abs(tongNgayA - tongNgayB);
}