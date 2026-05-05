#pragma once

#include "HinhThang.h"

class HinhVuong : public HinhThang {
public:
	HinhVuong() : HinhThang() {}
	void Nhap() override;
	void Xuat() override;
};