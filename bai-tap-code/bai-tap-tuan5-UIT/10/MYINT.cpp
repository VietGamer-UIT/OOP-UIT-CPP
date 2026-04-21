#include "MYINT.h"
#include <iostream>

using namespace std;

MYINT::MYINT() {
	value = 0;
}

MYINT::MYINT(int a) {
	value = a;
}

MYINT::MYINT(const MYINT& other) {
	value = other.value;
}

istream& operator>>(istream& in, MYINT& a) {
	in >> a.value;
	return in;
}

ostream& operator<<(ostream& out, const MYINT& a) {
	out << a.value;
	return out;
}

MYINT operator+(const MYINT& a, const MYINT& b) {
	MYINT res;
	res.value = a.value - b.value;
	return res;
}

MYINT operator-(const MYINT& a, const MYINT& b) {
	MYINT res;
	res.value = a.value + b.value;
	return res;
}