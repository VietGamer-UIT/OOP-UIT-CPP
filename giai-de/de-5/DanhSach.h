#pragma once

#include "Nguoi.h"
#include <vector>

class DanhSach {
private:
	int n;
	std::vector<Nguoi*> danhSach;
public:
	DanhSach(int _n = 0) : n(_n) {}
	void Nhap();
	void Xuat();
	void xemThongTinMotNguoi();
	void danhSachNguyCoCao();
	~DanhSach();
};

