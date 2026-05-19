#pragma once

#include "BuocSkinCare.h"

class ChongNang : public BuocSkinCare {
private:
	bool coSuDung;
public:
	ChongNang() : BuocSkinCare("Chong nang", 30, 50), coSuDung(true) {}
	void Nhap() override;
	int getThoiGian() override;
	int getGiaTien() override;
};

