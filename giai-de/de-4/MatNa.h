#pragma once

#include "BuocSkinCare.h"

class MatNa : public BuocSkinCare {
public:
	MatNa() : BuocSkinCare("Mat na", 30, 100) {}
	void Nhap() override;
};

