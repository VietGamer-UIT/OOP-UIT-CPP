#pragma once

#include <iostream>

class DaThuc {
private:
	int n;
	double* heSo;
public:
	DaThuc();
	~DaThuc();
	DaThuc(const DaThuc& other);
	DaThuc& operator=(const DaThuc& other);
	friend std::istream& operator>>(std::istream& in, DaThuc& dt);
	friend std::ostream& operator<<(std::ostream& out, const DaThuc& dt);
	friend DaThuc operator+(const DaThuc& a, const DaThuc& b);
	friend DaThuc operator-(const DaThuc& a, const DaThuc& b);
};