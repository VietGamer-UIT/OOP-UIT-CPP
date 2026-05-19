#pragma once

#include "BuocSkinCare.h"

class Toner : public BuocSkinCare {
private:
	bool coSuDung;
public:
	Toner() : BuocSkinCare("Toner", 10, 50), coSuDung(true) {}
	void Nhap() override;
	int getThoiGian() override;
	int getGiaTien() override;
};

