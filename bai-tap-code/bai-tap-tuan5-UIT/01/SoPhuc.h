#pragma once

#include <iostream>

class SoPhuc {
private:
	double thuc, ao;
public:
	SoPhuc(double t = 0, double a = 0) : thuc(t), ao(a) {}
	friend std::istream& operator>>(std::istream& in, SoPhuc& a);
	friend std::ostream& operator<<(std::ostream& out, SoPhuc a);
	friend SoPhuc operator+(const SoPhuc& a, const SoPhuc& b);
	friend SoPhuc operator-(const SoPhuc& a, const SoPhuc& b);
	friend SoPhuc operator*(const SoPhuc& a, const SoPhuc& b);
	friend SoPhuc operator/(const SoPhuc& a, const SoPhuc& b);
	friend bool operator==(const SoPhuc& a, const SoPhuc& b);
	friend bool operator!=(const SoPhuc& a, const SoPhuc& b);
	friend bool operator>(const SoPhuc& a, const SoPhuc& b);
	friend bool operator>=(const SoPhuc& a, const SoPhuc& b);
	friend bool operator<(const SoPhuc& a, const SoPhuc& b);
	friend bool operator<=(const SoPhuc& a, const SoPhuc& b);
};