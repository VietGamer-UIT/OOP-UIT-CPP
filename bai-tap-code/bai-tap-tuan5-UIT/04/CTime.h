#pragma once
#include <iostream>
#include "CTimeSpan.h" // Bắt buộc include để dùng làm kiểu trả về

class CTime {
private:
    int gio, phut, giay;
public:
    CTime(int h = 0, int m = 0, int s = 0) : gio(h), phut(m), giay(s) {}
    friend std::istream& operator>>(std::istream& in, CTime& ct);
    friend std::ostream& operator<<(std::ostream& out, CTime ct);
    friend CTime operator+(const CTime& ct, int s);
    friend CTime operator-(const CTime& ct, int s);
    friend CTimeSpan operator-(const CTime& a, const CTime& b);
    friend CTime& operator++(CTime& ct);
    friend CTime& operator--(CTime& ct);
    friend CTime operator++(CTime& ct, int);
    friend CTime operator--(CTime& ct, int);
};