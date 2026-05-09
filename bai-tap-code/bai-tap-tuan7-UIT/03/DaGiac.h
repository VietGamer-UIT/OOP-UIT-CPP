#pragma once

#include <vector>
#include "Diem.h"

class DaGiac {
protected:
	std::vector<Diem*> danhSachDiem;
public:
	DaGiac() {}
	virtual ~DaGiac();
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	virtual void tinhTien(int m, int n);
};