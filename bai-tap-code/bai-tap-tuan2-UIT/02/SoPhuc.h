#pragma once
#include <iostream>

using namespace std;

class SoPhuc {
private:
	double thuc;
	double ao;
public:
	friend istream& operator >> (istream& in, SoPhuc& sp);
	friend ostream& operator << (ostream& out, SoPhuc sp);
	friend SoPhuc operator + (const SoPhuc& sp1, const SoPhuc& sp2);
	friend SoPhuc operator - (const SoPhuc& sp1, const SoPhuc& sp2);
	friend SoPhuc operator * (const SoPhuc& sp1, const SoPhuc& sp2);
	friend SoPhuc operator / (const SoPhuc& sp1, const SoPhuc& sp2);
};