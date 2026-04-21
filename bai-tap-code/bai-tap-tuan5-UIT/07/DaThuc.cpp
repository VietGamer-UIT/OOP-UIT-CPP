#include "DaThuc.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

DaThuc::DaThuc() : n(0), heSo(new double[1]) {
	heSo[0] = 0;
}

DaThuc::DaThuc(const DaThuc& other) {
	n = other.n;
	heSo = new double[n + 1];
	for (int i = 0; i <= n; i++) {
		heSo[i] = other.heSo[i];
	}
}

DaThuc& DaThuc::operator=(const DaThuc& other) {
	if (this == &other) return *this;
	delete[] heSo;
	n = other.n;
	heSo = new double[n + 1];
	for (int i = 0; i <= n; i++) {
		heSo[i] = other.heSo[i];
	}
	return *this;
}

istream& operator>>(istream& in, DaThuc& dt) {
	cout << "Nhap bac cua da thuc: ";
	in >> dt.n;
	delete[] dt.heSo;
	dt.heSo = new double[dt.n + 1];
	for (int i = 0; i <= dt.n; i++) {
		cout << "Nhap he so cua " << "x^" << i << ":";
		in >> dt.heSo[i];
	}
	return in;
}

ostream& operator<<(ostream& out, const DaThuc& dt) {
	bool isZero = true;
	for (int i = dt.n; i >= 0; i--) {
		if (dt.heSo[i] == 0) continue;
		isZero = false;
		if (i < dt.n && dt.heSo[i] > 0) out << " + ";
		if (i > 0) out << "x^" << i;
	}
	if (isZero) out << "0";
	return out;
}

DaThuc operator+(const DaThuc& a, const DaThuc& b) {
	DaThuc res;
	res.n = max(a.n, b.n);
	delete[] res.heSo;
	res.heSo = new double[res.n + 1]();
	for (int i = 0; i <= a.n; i++) {
		res.heSo[i] = a.heSo[i];
	}
	for (int i = 0; i <= b.n; i++) {
		res.heSo[i] += b.heSo[i];
	}
	return res;
}

DaThuc operator-(const DaThuc& a, const DaThuc& b) {
	DaThuc res;
	res.n = max(a.n, b.n);
	delete[] res.heSo;
	res.heSo = new double[res.n + 1]();
	for (int i = 0; i <= a.n; i++) {
		res.heSo[i] = a.heSo[i];
	}
	for (int i = 0; i <= b.n; i++) {
		res.heSo[i] -= b.heSo[i];
	}
	return res;
}

DaThuc::~DaThuc() {
	delete[] heSo;
}