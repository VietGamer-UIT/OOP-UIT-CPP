#pragma once

#include "People.h"

class CongNhan : public People {
private:
	float luong;
public:
	CongNhan(float l = 0) : luong(l) {}
	void Nhap() override;
	void Xuat() override;
};

