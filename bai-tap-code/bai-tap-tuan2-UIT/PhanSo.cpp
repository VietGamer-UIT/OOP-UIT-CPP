#include "PhanSo.h"
#include <iostream>
#include <numeric>

using namespace std;

istream& operator >> (istream& in, PhanSo& ps) {
	in >> ps.tuso >> ps.mauso;
	return in;
}

ostream& operator << (ostream& out, PhanSo ps) {
	if (ps.mauso == 1) {
		out << ps.tuso;
	}
	else if (ps.mauso == -1) {
		out << -ps.tuso;
	}
	else {
		out << ps.tuso << "/" << ps.mauso;
	}
	return out;
}

void PhanSo::rutGon() {
	int temp = gcd(tuso, mauso);
	tuso /= temp;
	mauso /= temp;
	if (mauso < 0) {
		tuso = -tuso;
		mauso = -mauso;
	}
}

PhanSo operator + (const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo res;
	res.tuso = ps1.tuso * ps2.mauso + ps2.tuso * ps1.mauso;
	res.mauso = ps1.mauso * ps2.mauso;
	res.rutGon();
	return res;
}

PhanSo operator - (const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo res;
	res.tuso = ps1.tuso * ps2.mauso - ps2.tuso * ps1.mauso;
	res.mauso = ps1.mauso * ps2.mauso;
	res.rutGon();
	return res;
}

PhanSo operator * (const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo res;
	res.tuso = ps1.tuso * ps2.tuso;
	res.mauso = ps1.mauso * ps2.mauso;
	res.rutGon();
	return res;
}

PhanSo operator / (const PhanSo& ps1, const PhanSo& ps2) {
	PhanSo res;
	res.tuso = ps1.tuso * ps2.mauso;
	res.mauso = ps1.mauso * ps2.tuso;
	res.rutGon();
	return res;
}