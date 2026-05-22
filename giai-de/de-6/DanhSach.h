#pragma once
#include "QuanCo.h"
#include <vector>

class DanhSach {
private:
	std::vector<QuanCo*> danhSach;
public:
	void Nhap();
	void Xuat();
	~DanhSach();
};

