#pragma once

#include "People.h"

class NgheSi : public People {
private:
	std::string linhVuc;
	int namKinhNghiem;
public:
	NgheSi(std::string lv = "", int nam = 0) : linhVuc(lv), namKinhNghiem(nam) {}
	void Nhap() override;
	void Xuat() override;
};

