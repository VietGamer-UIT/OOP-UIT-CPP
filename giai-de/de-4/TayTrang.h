#pragma once

#include "BuocSkinCare.h"

class TayTrang : public BuocSkinCare {
public:
	TayTrang() : BuocSkinCare("Tay trang", 5, 30) {}
	void Nhap() override;
};

