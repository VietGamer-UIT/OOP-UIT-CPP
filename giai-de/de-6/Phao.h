#pragma once

#include "Xe.h"

class Phao : public Xe {
public:
	Phao(std::string qc = "", std::string ms = "", int _x = 0, int _y = 0) : Xe(qc, ms, _x, _y) {}
	void Nhap() override;
	void Xuat() override;
	void diChuyenQuanCo() override;
};

