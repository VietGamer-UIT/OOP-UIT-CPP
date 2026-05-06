#pragma once
#include <iostream>

using namespace std;

class PhanSo {
private:
	int tuso;
	int mauso;
public:
	friend istream& operator >> (istream& in, PhanSo& ps);
	friend ostream& operator << (ostream& out, PhanSo ps);
	friend PhanSo operator + (const PhanSo& ps1, const PhanSo& ps2);
	friend PhanSo operator - (const PhanSo& ps1, const PhanSo& ps2);
	friend PhanSo operator * (const PhanSo& ps1, const PhanSo& ps2);
	friend PhanSo operator / (const PhanSo& ps1, const PhanSo& ps2);
	void rutGon();
};