#pragma once

#include "ChungCu.h"

class CCBcon : public ChungCu {
private:
	int soTien;
public:
	CCBcon(int tien = 0) : soTien(tien) {}
	void Nhap() override;
	void guiThongBao() override;
	void tienPhong() override;
};

