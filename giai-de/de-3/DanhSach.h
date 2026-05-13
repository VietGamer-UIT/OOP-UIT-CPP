#pragma once

#include "NhanVat.h"
#include <vector>

class DanhSach {
private:
	int n;
	std::vector<NhanVat*> danhSach;
public:
	DanhSach(int _n = 0) : n(_n) {}
	~DanhSach();
	void Nhap();
	void maxSatThuong();
	void soSanhSatThuong(NhanVat* a, NhanVat* b);
	void soSanhTrongDanhSach(int i, int j);
};

