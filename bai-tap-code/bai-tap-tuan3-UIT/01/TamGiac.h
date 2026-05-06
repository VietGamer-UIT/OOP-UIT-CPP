#pragma once
#include "Point.h"

class TamGiac {
private:
	Point a, b, c;
public:
	TamGiac() {};
	TamGiac(Point m, Point n, Point p) : a(m), b(n), c(p) {};
	Point getA() const { return a; }
	Point getB() const { return b; }
	Point getC() const { return c; }
	void setA(Point m) { a = m; }
	void setB(Point n) { b = n; }
	void setC(Point p) { c = p; }
	void Nhap();
	void Xuat() const;
	void TinhTien(int m, int n);
	void Quay(float rad);
	void PhongTo(float k);
	void ThuNho(float k);
	~TamGiac() {}
};

