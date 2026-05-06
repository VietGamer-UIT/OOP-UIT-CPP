#include "SoPhuc.h"
#include <iostream>

using namespace std;

istream& operator >> (istream& in, SoPhuc& sp) {
	in >> sp.thuc >> sp.ao;
	return in;
}

ostream& operator << (ostream& out, SoPhuc sp) {
	out << sp.thuc << " + " << sp.ao << "i";
	return out;
}

SoPhuc operator + (const SoPhuc& sp1, const SoPhuc& sp2) {
	SoPhuc sp;
	sp.thuc = sp1.thuc + sp2.thuc;
	sp.ao = sp1.ao + sp2.ao;
	return sp;
}

SoPhuc operator - (const SoPhuc& sp1, const SoPhuc& sp2) {
	SoPhuc sp;
	sp.thuc = sp1.thuc - sp2.thuc;
	sp.ao = sp1.ao - sp2.ao;
	return sp;
}

SoPhuc operator * (const SoPhuc& sp1, const SoPhuc& sp2) {
	SoPhuc sp;
	sp.thuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao;
	sp.ao = sp1.thuc * sp2.ao + sp1.ao * sp2.thuc;
	return sp;
}

SoPhuc operator / (const SoPhuc& sp1, const SoPhuc& sp2) {
	SoPhuc sp;
	double mau = sp2.thuc * sp2.thuc + sp2.ao * sp2.ao;
	sp.thuc = (sp1.thuc * sp2.thuc + sp1.ao * sp2.ao) / mau;
	sp.ao = (sp1.ao * sp2.thuc - sp1.thuc * sp2.ao) / mau;
	return sp;
}