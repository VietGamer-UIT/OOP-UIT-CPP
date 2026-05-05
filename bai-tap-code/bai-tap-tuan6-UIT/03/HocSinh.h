#pragma once

#include "PeoPle.h"

class HocSinh : public People {
public:
	HocSinh() : People("", "") {}
	void Nhap();
	void Xuat();
};

