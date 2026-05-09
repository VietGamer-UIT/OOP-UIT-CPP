#pragma once

#include "Sach.h"
#include <string>

class TieuThuyet : public Sach {
private:
	std::string theLoai;
public:
	TieuThuyet(std::string tl = "") : theLoai(tl) {}
	void Nhap() override;
	void Xuat() override;
};

