#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class CString {
private:
	int n;
	char* c;
public:
	CString();
	~CString();
	CString(const CString& other);
	CString(const char* s);
	CString& operator=(const CString& other);
	friend std::istream& operator>>(std::istream& in, CString& cs);
	friend std::ostream& operator<<(std::ostream& out, const CString& cs);
	friend CString operator+(const CString& a, const CString& b);
	friend bool operator==(const CString& a, const CString& b);
	friend bool operator>(const CString& a, const CString& b);
	friend bool operator<(const CString& a, const CString& b);
};

