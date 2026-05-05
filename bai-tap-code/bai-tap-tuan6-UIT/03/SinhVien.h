#pragma once

#include "PeoPle.h"

class SinhVien : public People {
public:
	SinhVien() : People("", "") {}
	void Nhap();
	void Xuat();
};