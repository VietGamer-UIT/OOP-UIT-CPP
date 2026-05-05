#pragma once

#include "HinhThang.h"

class HinhBinhHanh : public HinhThang {
public:
	HinhBinhHanh() : HinhThang() {}
	void Nhap() override;
	void Xuat() override;
};