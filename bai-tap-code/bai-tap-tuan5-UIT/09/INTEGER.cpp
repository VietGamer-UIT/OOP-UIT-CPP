#include "INTEGER.h"
#include <iostream>

using namespace std;

INTEGER::INTEGER() {
	value = 0;
}

INTEGER::INTEGER(int a) {
	value = a;
}
INTEGER::INTEGER(const INTEGER& other) {
	value = other.value;
}

istream& operator>>(istream& in, INTEGER& a) {
	in >> a.value;
	return in;
}

INTEGER::operator int() const {
	return value;
}