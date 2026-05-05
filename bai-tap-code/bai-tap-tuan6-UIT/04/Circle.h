#pragma once

#include "Ellipse.h"

class Circle : public Ellipse {
public:
	Circle() : Ellipse() {}
	void Nhap() override;
	void Xuat() override;
	void veHinh() override; 
};

