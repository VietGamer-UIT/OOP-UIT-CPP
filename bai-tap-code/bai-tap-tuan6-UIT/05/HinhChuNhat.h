#pragma once

#include "HinhThang.h"

class HinhChuNhat : public HinhThang {
public:
	HinhChuNhat() : HinhThang() {}
	void Nhap() override;
	void Xuat() override;
};