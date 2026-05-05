#pragma once

#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien {
private:
	float luongCanBan;
	int soSanPham;
public:
	NhanVienSanXuat(float lcb = 0, float ssp = 0) : luongCanBan(lcb), soSanPham(ssp) {}
	void Nhap();
	void Xuat();
	void tinhLuong() override;
};