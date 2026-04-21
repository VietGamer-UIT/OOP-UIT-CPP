#include "CTime.h"
#include "CTimeSpan.h"
#include <iostream>
#include <iomanip>

using namespace std;

istream& operator>>(istream& in, CTime& ct) {
	in >> ct.gio >> ct.phut >> ct.giay;
	return in;
}

ostream& operator<<(ostream& out, CTime ct) {
	out << setfill('0') << setw(2) << ct.gio << ":"
		<< setfill('0') << setw(2) << ct.phut << ":"
		<< setfill('0') << setw(2) << ct.giay << endl;
	return out;
}

CTime operator+(const CTime& ct, int s) {
	int total = ct.gio * 3600 + ct.phut * 60 + ct.giay + s;
	int h = (total / 3600) % 24;
	int m = (total / 60) % 60;
	int sec = total % 60;
	return CTime(h, m, sec);
}

CTime operator-(const CTime& ct, int s) {
	int total = ct.gio * 3600 + ct.phut * 60 + ct.giay - s;
	while (total < 0) {
		total += 24 * 3600;
	}
	int h = (total / 3600) % 24;
	int m = (total / 60) % 60;
	int sec = total % 60;
	return CTime(h, m, sec);
}

CTimeSpan operator-(const CTime& a, const CTime& b) {
	int totalA = a.gio * 3600 + a.phut * 60 + a.giay;
	int totalB = b.gio * 3600 + b.phut * 60 + b.giay;
	int temp = abs(totalA - totalB);
	int h = temp / 3600;
	int m = (temp / 60) % 60;
	int s = temp % 60;
	return CTimeSpan(h, m, s);
}

CTime& operator++(CTime& ct) {
	ct = ct + 1;
	return ct;
}

CTime& operator--(CTime& ct) {
	ct = ct - 1;
	return ct;
}

CTime operator++(CTime& ct, int) {
	CTime temp = ct;
	ct = ct + 1;
	return temp;
}

CTime operator--(CTime& ct, int) {
	CTime temp = ct;
	ct = ct - 1;
	return temp;
}