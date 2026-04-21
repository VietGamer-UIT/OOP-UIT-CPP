#pragma once

#include <iostream>

class CDate {
private:
	int ngay, thang, nam;
public:
	CDate(int d = 1, int m = 1, int y = 1900) : ngay(d), thang(m), nam(y) {}
	friend bool laNamNhuan(int nam);
	friend int soNgayCuaThang(int thang, int nam);
	friend int tinhNgay(const CDate& a);
	friend std::istream& operator>>(std::istream& in, CDate& cd);
	friend std::ostream& operator<<(std::ostream& out, CDate cd);
	friend CDate operator+(const CDate& cd, int d);
	friend CDate operator-(const CDate& cd, int d);
	friend int operator-(const CDate& a, const CDate& b);
	friend CDate& operator++(CDate& cd);    
	friend CDate operator++(CDate& cd, int);
	friend CDate& operator--(CDate& cd);
	friend CDate operator--(CDate& cd, int);
};