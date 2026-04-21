#pragma once

#include <iostream>

class PhanSo {
private:
	int tu, mau;
public:
	PhanSo(int x = 0, int y = 1) : tu(x), mau(y) {}
	friend std::istream& operator>>(std::istream& in, PhanSo& ps);
	friend std::ostream& operator<<(std::ostream& out, PhanSo ps);
	friend void rutGon(PhanSo& ps);
	friend PhanSo operator+(const PhanSo& a, const PhanSo& b);
	friend PhanSo operator-(const PhanSo& a, const PhanSo& b);
	friend PhanSo operator*(const PhanSo& a, const PhanSo& b);
	friend PhanSo operator/(const PhanSo& a, const PhanSo& b);
	friend bool operator==(const PhanSo& a, const PhanSo& b);
	friend bool operator!=(const PhanSo& a, const PhanSo& b);
	friend bool operator>(const PhanSo& a, const PhanSo& b);
	friend bool operator>=(const PhanSo& a, const PhanSo& b);
	friend bool operator<(const PhanSo& a, const PhanSo& b);
	friend bool operator<=(const PhanSo& a, const PhanSo& b);
};