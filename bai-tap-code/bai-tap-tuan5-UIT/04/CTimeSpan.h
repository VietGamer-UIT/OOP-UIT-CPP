#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class CTimeSpan {
private:
	int hours, minutes, seconds;
public:
	CTimeSpan(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
	friend istream& operator>>(istream& in, CTimeSpan& cts);
	friend ostream& operator<<(ostream& out, CTimeSpan cts);
	friend CTimeSpan operator+(const CTimeSpan& a, const CTimeSpan& b);
	friend CTimeSpan operator-(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator==(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator!=(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator>(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator>=(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator<(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator<=(const CTimeSpan& a, const CTimeSpan& b);
};