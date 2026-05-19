#pragma once

#include "BuocSkinCare.h"

class Serum : public BuocSkinCare {
private:
	bool coSuDung;
public:
	Serum() : BuocSkinCare("Serum", 10, 50), coSuDung(true) {}
	void Nhap() override;
	int getThoiGian() override;
	int getGiaTien() override;
};

