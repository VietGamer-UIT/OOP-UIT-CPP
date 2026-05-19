#pragma once

#include <string>
#include "BuocSkinCare.h"

class KhachHang {
private:
	std::string hoTen;
	BuocSkinCare* quyTrinh[7];
public:
	KhachHang();
	void Nhap();
	int tongTien();
	int tongThoiGian();
	void Xuat();
	~KhachHang();
};

