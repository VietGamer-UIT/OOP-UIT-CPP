#pragma once

#include "NhanVien.h"

class NhanVienVanPhong : public NhanVien {
private:
	int soNgayLamViec;
public:
	NhanVienVanPhong(int snlv = 0) : soNgayLamViec(snlv) {}
	void Nhap();
	void Xuat();
	void tinhLuong() override;
};