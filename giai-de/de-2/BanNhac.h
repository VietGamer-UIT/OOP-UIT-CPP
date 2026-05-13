#pragma once

#include "KyHieuAmNhac.h"
#include <vector>

class BanNhac {
private:
	std::vector<KyHieuAmNhac*> banNhac;
	int n;
public:
	BanNhac(int _n = 0) : n(_n) {}
	~BanNhac();
	void Nhap();
	void demLangDen();
	void maxCaoDo();
};