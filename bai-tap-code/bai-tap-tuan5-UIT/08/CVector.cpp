#include "CVector.h"
#include <iostream>

using namespace std;

CVector::CVector() : n(0), toaDo(new double[1]) {
	toaDo[0] = 0;
}

CVector::~CVector() {
	delete[] toaDo;
}

CVector::CVector(const CVector& other) {
	n = other.n;
	toaDo = new double[n];
	for (int i = 0; i < n; i++) {
		toaDo[i] = other.toaDo[i];
	}
}

CVector& CVector::operator=(const CVector& other) {
	if (this == &other) return *this;
	delete[] toaDo;
	n = other.n;
	toaDo = new double[n];
	for (int i = 0; i < n; i++) {
		toaDo[i] = other.toaDo[i];
	}
	return *this;
}

istream& operator>>(istream& in, CVector& vt) {
	cout << "Nhap so chieu Vector: ";
	in >> vt.n;
	delete[] vt.toaDo;
	vt.toaDo = new double[vt.n];
	for (int i = 0; i < vt.n; i++) {
		cout << "Nhap toa do thu " << i << ": ";
		in >> vt.toaDo[i];
	}
	return in;
}

ostream& operator<<(ostream& out, const CVector& vt) {
	out << "(";
	for (int i = 0; i < vt.n; i++) {
		out << vt.toaDo[i];
		if (i < vt.n - 1) {
			out << ", ";
		}
	}
	out << ")";
	return out;
}

CVector operator+(const CVector& a, const CVector& b) {
	CVector res;
	res.n = a.n;
	delete[] res.toaDo;
	res.toaDo = new double[res.n];
	for (int i = 0; i < res.n; i++) {
		res.toaDo[i] = a.toaDo[i] + b.toaDo[i];
	}
	return res;
}

CVector operator-(const CVector& a, const CVector& b) {
	CVector res;
	res.n = a.n;
	delete[] res.toaDo;
	res.toaDo = new double[res.n];
	for (int i = 0; i < res.n; i++) {
		res.toaDo[i] = a.toaDo[i] - b.toaDo[i];
	}
	return res;
}

double operator*(const CVector& a, const CVector& b) {
	double sum = 0;
	for (int i = 0; i < a.n; i++) {
		sum += a.toaDo[i] * b.toaDo[i];
	}
	return sum;
}