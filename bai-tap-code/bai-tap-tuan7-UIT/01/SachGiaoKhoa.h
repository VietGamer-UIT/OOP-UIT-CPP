#pragma once

#include "Sach.h"
#include <string>

class SachGiaoKhoa : public Sach {
private:
	std::string monHoc, nhaXuatBan;
public:
	SachGiaoKhoa(std::string mh = "", std::string nxb = "") : monHoc(mh), nhaXuatBan(nxb) {}
	void Nhap() override;
	void Xuat() override;
};

