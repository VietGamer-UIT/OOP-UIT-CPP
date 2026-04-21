#pragma once
#include <iostream>
#include <cmath>

class CTimeSpan {
private:
	int hours, minutes, seconds;
public:
	CTimeSpan(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
	friend std::istream& operator>>(std::istream& in, CTimeSpan& cts);
	friend std::ostream& operator<<(std::ostream& out, CTimeSpan cts);
	friend CTimeSpan operator+(const CTimeSpan& a, const CTimeSpan& b);
	friend CTimeSpan operator-(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator==(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator!=(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator>(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator>=(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator<(const CTimeSpan& a, const CTimeSpan& b);
	friend bool operator<=(const CTimeSpan& a, const CTimeSpan& b);
};