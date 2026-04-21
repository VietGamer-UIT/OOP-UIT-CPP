#pragma once

#include <iostream>

class INTEGER {
private:
	int value;
public:
	INTEGER();
	INTEGER(int a);
	INTEGER(const INTEGER& other);
	friend std::istream& operator>>(std::istream& in, INTEGER& a);
	operator int() const;
};

