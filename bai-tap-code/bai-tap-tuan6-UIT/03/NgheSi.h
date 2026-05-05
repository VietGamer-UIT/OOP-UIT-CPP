#pragma once

#include "PeoPle.h"

class NgheSi : public People {
private:
	std::string linhVuc;
	int namKinhNghiem;
public:
	NgheSi(std::string lv = "", int nam = 0) : linhVuc(lv), namKinhNghiem(nam) {}
	void Nhap();
	void Xuat();
};

