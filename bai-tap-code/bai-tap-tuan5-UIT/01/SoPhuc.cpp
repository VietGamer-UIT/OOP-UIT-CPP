#include "SoPhuc.h"
#include <iostream>
#include <cmath>

using namespace std;

istream& operator>>(istream& in, SoPhuc& a) {
	cout << "Nhap so phuc: ";
	in >> a.thuc >> a.ao;
	return in;
}

ostream& operator<<(ostream& out, SoPhuc a) {
	out << a.thuc;
	if (a.ao >= 0) out << " + " << a.ao << "i\n";
	else out << " - " << abs(a.ao) << "i\n";
	return out;
}

SoPhuc operator+(const SoPhuc& a, const SoPhuc& b) {
	SoPhuc res;
	res.thuc = a.thuc + b.thuc;
	res.ao = a.ao + b.ao;
	return res;
}

SoPhuc operator-(const SoPhuc& a, const SoPhuc& b) {
	SoPhuc res;
	res.thuc = a.thuc - b.thuc;
	res.ao = a.ao - b.ao;
	return res;
}

SoPhuc operator*(const SoPhuc& a, const SoPhuc& b) {
	SoPhuc res;
	res.thuc = a.thuc * b.thuc - a.ao * b.ao;
	res.ao = a.thuc * b.ao + a.ao * b.thuc;
	return res;
}

SoPhuc operator/(const SoPhuc& a, const SoPhuc& b) {
	SoPhuc res;
	double mau = b.thuc * b.thuc + b.ao * b.ao;
	res.thuc = (a.thuc * b.thuc + a.ao * b.ao) / mau;
	res.ao = (a.ao * b.thuc - a.thuc * b.ao) / mau;
	return res;
}

bool operator==(const SoPhuc& a, const SoPhuc& b) {
	return a.thuc == b.thuc && a.ao == b.ao;
}

bool operator!=(const SoPhuc& a, const SoPhuc& b) {
	return !(a == b);
}

bool operator>(const SoPhuc& a, const SoPhuc& b) {
	return a.thuc > b.thuc || (a.thuc == b.thuc && a.ao > b.ao);
}

bool operator>=(const SoPhuc& a, const SoPhuc& b) {
	return !(a < b);
}

bool operator<(const SoPhuc& a, const SoPhuc& b) {
	return a.thuc < b.thuc || (a.thuc == b.thuc && a.ao < b.ao);
}

bool operator<=(const SoPhuc& a, const SoPhuc& b) {
	return !(a > b);
}