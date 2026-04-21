#pragma once

#include <iostream>

class MYINT {
private:
	int value;
public:
	MYINT();
	MYINT(int a);
	MYINT(const MYINT& other);
	friend std::istream& operator>>(std::istream& in, MYINT& a);
	friend std::ostream& operator<<(std::ostream& out, const MYINT& a);
	friend MYINT operator+(const MYINT& a, const MYINT& b);
	friend MYINT operator-(const MYINT& a, const MYINT& b);
};