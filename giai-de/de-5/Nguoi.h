#pragma once

#include "Personality.h"
#include "TinhA.h"
#include "TinhC.h"
#include "TinhE.h"
#include "TinhN.h"
#include "TinhO.h"

class Nguoi {
private:
	Personality* OCEAN[5];
public:
	Nguoi();
	void Nhap();
	void Xuat();
	void kiemTraNguyCoCao();
};

