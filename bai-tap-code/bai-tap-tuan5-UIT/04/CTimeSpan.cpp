#include "CTimeSpan.h"

using namespace std;

istream& operator>>(istream& in, CTimeSpan& cts) {
	in >> cts.hours >> cts.minutes >> cts.seconds;
	return in;
}

ostream& operator<<(ostream& out, CTimeSpan cts) {
	out << cts.hours << ":" << cts.minutes << ":" << cts.seconds;
	return out;
}

CTimeSpan operator+(const CTimeSpan& a, const CTimeSpan& b) {
	CTimeSpan res;
	int temp = (a.hours * 3600 + a.minutes * 60 + a.seconds) + (b.hours * 3600 + b.minutes * 60 + b.seconds);
	res.hours = temp / 3600;
	res.minutes = (temp / 60) % 60;
	res.seconds = temp % 60;
	return res;
}

CTimeSpan operator-(const CTimeSpan& a, const CTimeSpan& b) {
	CTimeSpan res;
	int temp = (a.hours * 3600 + a.minutes * 60 + a.seconds) - (b.hours * 3600 + b.minutes * 60 + b.seconds);
	temp = abs(temp);
	res.hours = temp / 3600;
	res.minutes = (temp / 60) % 60;
	res.seconds = temp % 60;
	return res;
}

bool operator==(const CTimeSpan& a, const CTimeSpan& b) {
	return (a.hours * 3600 + a.minutes * 60 + a.seconds) == (b.hours * 3600 + b.minutes * 60 + b.seconds);
}

bool operator!=(const CTimeSpan& a, const CTimeSpan& b) {
	return !(a == b);
}

bool operator>(const CTimeSpan& a, const CTimeSpan& b) {
	return (a.hours * 3600 + a.minutes * 60 + a.seconds) > (b.hours * 3600 + b.minutes * 60 + b.seconds);
}

bool operator>=(const CTimeSpan& a, const CTimeSpan& b) {
	return !(a < b);
}

bool operator<(const CTimeSpan& a, const CTimeSpan& b) {
	return (a.hours * 3600 + a.minutes * 60 + a.seconds) < (b.hours * 3600 + b.minutes * 60 + b.seconds);
}

bool operator<=(const CTimeSpan& a, const CTimeSpan& b) {
	return !(a > b);
}