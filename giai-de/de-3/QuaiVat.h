#pragma once

#include "NhanVat.h"
#include <string>

class QuaiVat : public NhanVat {
private:
	std::string phanLoai;
public:
	QuaiVat(std::string pl = "") : phanLoai(pl) {}
	void Nhap() override;
	void Xuat() override;
	float tongSatThuong() override;
	std::string getPhanLoai() { return phanLoai; }
};

