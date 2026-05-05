#pragma once

#include "ChungCu.h"

class CCVinHome : public ChungCu {
private:
	int soTien;
public:
	CCVinHome(int tien = 0) : soTien(tien) {}
	void Nhap() override;
	void guiThongBao() override;
	void tienPhong() override;
};

