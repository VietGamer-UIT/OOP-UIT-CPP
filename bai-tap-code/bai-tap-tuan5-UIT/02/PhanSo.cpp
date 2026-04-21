#include "PhanSo.h"
#include <iostream>
#include <numeric>

using namespace std;

istream& operator>>(istream& in, PhanSo& ps) {
	cout << "Nhap phan so: ";
	in >> ps.tu >> ps.mau;
	while (ps.mau == 0) {
		cout << "Mau so phai khac 0, nhap lai.";
		in >> ps.tu >> ps.mau;
	}
	return in;
}

ostream& operator<<(ostream& out, PhanSo ps) {
	out << ps.tu << "/" << ps.mau << endl;
	return out;
}

void rutGon(PhanSo& ps) {
	int temp = gcd(ps.tu, ps.mau);
	ps.tu /= temp;
	ps.mau /= temp;
	if (ps.mau < 0) {
		ps.tu = -ps.tu;
		ps.mau = -ps.mau;
	}
}

PhanSo operator+(const PhanSo& a, const PhanSo& b) {
	PhanSo res;
	if (a.mau != b.mau) {
		res.tu = a.tu * b.mau + b.tu * a.mau;
		res.mau = a.mau * b.mau;
		rutGon(res);
	}
	else {
		res.tu = a.tu + b.tu;
		res.mau = a.mau;
		rutGon(res);
	}
	return res;
}

PhanSo operator-(const PhanSo& a, const PhanSo& b) {
	PhanSo res;
	if (a.mau != b.mau) {
		res.tu = a.tu * b.mau - b.tu * a.mau;
		res.mau = a.mau * b.mau;
		rutGon(res);
	}
	else {
		res.tu = a.tu - b.tu;
		res.mau = a.mau;
		rutGon(res);
	}
	return res;
}

PhanSo operator*(const PhanSo& a, const PhanSo& b) {
	PhanSo res;
	res.tu = a.tu * b.tu;
	res.mau = a.mau * b.mau;
	rutGon(res);
	return res;
}

PhanSo operator/(const PhanSo& a, const PhanSo& b) {
	PhanSo res;
	res.tu = a.tu * b.mau;
	res.mau = a.mau * b.tu;
	rutGon(res);
	return res;
}

bool operator==(const PhanSo& a, const PhanSo& b) {
	return (a.tu * b.mau) == (b.tu * a.mau);
}

bool operator!=(const PhanSo& a, const PhanSo& b) {
	return !(a == b);
}

bool operator>(const PhanSo& a, const PhanSo& b) {
	return (a.tu * b.mau) > (b.tu * a.mau);
}

bool operator>=(const PhanSo& a, const PhanSo& b) {
	return !(a < b);
}

bool operator<(const PhanSo& a, const PhanSo& b) {
	return (a.tu * b.mau) < (b.tu * a.mau);
}

bool operator<=(const PhanSo& a, const PhanSo& b) {
	return !(a > b);
}