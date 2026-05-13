#pragma once

#include "NhanVat.h"

class NguoiChoi : public NhanVat {
public:
	NguoiChoi() : NhanVat() {}
	void Nhap() override;
	void Xuat() override;
	float tongSatThuong() override;
};

