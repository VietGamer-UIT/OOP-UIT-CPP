#pragma once

#include "People.h"

class SinhVien : public People {
public:
	SinhVien() : People("", "") {}
	void Nhap() override;
	void Xuat() override;
};