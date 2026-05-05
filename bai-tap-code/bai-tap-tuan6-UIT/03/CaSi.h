#pragma once

#include "PeoPle.h"

class CaSi : public People {
private:
	std::string baiHatTop1;
	float tienBookShow;
public:
	CaSi(std::string bh = "", float tien = 0) : baiHatTop1(bh), tienBookShow(tien) {}
	void Nhap();
	void Xuat();
};

