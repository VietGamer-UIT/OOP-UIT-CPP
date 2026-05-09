#pragma once

#include "Sach.h"
#include <string>

class TapChi : public Sach {
private:
	std::string noiCongBo;
public:
	TapChi(std::string ncb = "") : noiCongBo(ncb) {}
	void Nhap() override;
	void Xuat() override;
};

