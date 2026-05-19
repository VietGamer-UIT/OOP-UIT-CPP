#pragma once

#include "BuocSkinCare.h"

class RuaMat : public BuocSkinCare {
public:
	RuaMat() : BuocSkinCare("Rua mat", 10, 50) {}
	void Nhap() override;
};

