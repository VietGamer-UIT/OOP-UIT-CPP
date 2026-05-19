#pragma once

#include <string>

class BuocSkinCare {
protected:
	std::string tenBuoc;
	int thoiGian, giaTien;
public:
	BuocSkinCare(std::string ten = "", int tg = 0, int gt = 0) : tenBuoc(ten), thoiGian(tg), giaTien(gt) {}
	virtual void Nhap() = 0;
	virtual void Xuat();
	virtual int getThoiGian() { return thoiGian; }
	virtual int getGiaTien() { return giaTien; }
};

