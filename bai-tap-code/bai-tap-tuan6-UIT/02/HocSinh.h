#pragma once

#include "People.h"

class HocSinh : public People {
public:
	HocSinh() : People("", "") {}
	void Nhap() override;
	void Xuat() override;
};

