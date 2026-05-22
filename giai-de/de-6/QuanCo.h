#pragma once

#include <string>

class QuanCo {
protected:
	std::string quanCo, mauSac;
	int x, y;
public:
	QuanCo(std::string qc = "", std::string ms = "", int _x = 0, int _y = 0) : quanCo(qc), mauSac(ms), x(_x), y(_y) {}
	virtual void Nhap();
	virtual void Xuat();
	virtual int getX() { return x; }
	virtual int getY() { return y; }
	virtual void diChuyenQuanCo() = 0;
	virtual ~QuanCo() {}
};

