#pragma once

#include "QuanCo.h"

class Tuong : public QuanCo {
public:
	Tuong(std::string qc = "", std::string ms = "", int _x = 0, int _y = 0) : QuanCo(qc, ms, _x, _y) {}
	void Nhap() override;
	void Xuat() override;
	void diChuyenQuanCo() override;
};

