#pragma once

#include <string>

class KyHieuAmNhac {
protected:
	std::string kyHieuNot;
	float truongDo;
public:
	KyHieuAmNhac(std::string khn = "", float td = 0) : kyHieuNot(khn), truongDo(td) {}
	virtual ~KyHieuAmNhac() {}
	virtual void Nhap();
	float getTruongDo();
	std::string getKyHieuNot();
};

