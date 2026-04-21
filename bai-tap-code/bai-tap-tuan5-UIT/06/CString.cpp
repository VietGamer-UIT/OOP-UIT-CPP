#define _CRT_SECURE_NO_WARNINGS

#include "CString.h"
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

CString::CString() : n(0), c(new char[1]) {
	c[0] = '\0';
}

CString::CString(const CString& other) {
	n = other.n;
	c = new char[n + 1];
	strcpy(c, other.c);
}

CString::CString(const char* s) {
	if (s != nullptr) {
		n = strlen(s);
		c = new char[n + 1];
		strcpy(c, s);
	}
	else {
		n = 0;
		c = new char[1];
		c[0] = '\0';
	}
}

CString& CString::operator=(const CString& other) {
	if (this == &other) return *this;
	delete[] c;
	n = other.n;
	c = new char[n + 1];
	strcpy(c, other.c);
	return *this;
}

istream& operator>>(std::istream& in, CString& cs) {
	char temp[1000];
	in >> temp;
	cs = temp;
	return in;
}

ostream& operator<<(std::ostream& out, const CString& cs) {
	out << cs.c;
	return out;
}

CString operator+(const CString& a, const CString& b) {
	CString res;
	res.n = a.n + b.n;
	delete[] res.c;
	res.c = new char[res.n + 1];
	strcpy(res.c, a.c);
	strcat(res.c, b.c);
	return res;
}

bool operator==(const CString& a, const CString& b) {
	return strcmp(a.c, b.c) == 0;
}

bool operator>(const CString& a, const CString& b) {
	return strcmp(a.c, b.c) > 0;
}

bool operator<(const CString& a, const CString& b) {
	return strcmp(a.c, b.c) < 0;
}

CString::~CString() {
	delete[] c;
}