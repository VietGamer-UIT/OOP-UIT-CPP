#pragma once

#include "BuocSkinCare.h"

class KemDuong : public BuocSkinCare {
private:
	bool coSuDung;
public:
	KemDuong() : BuocSkinCare("Kem duong", 10, 50), coSuDung(true) {}
	void Nhap() override;
	int getThoiGian() override;
	int getGiaTien() override;
};

