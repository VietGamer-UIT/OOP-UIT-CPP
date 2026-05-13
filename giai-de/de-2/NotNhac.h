#pragma once

#include "KyHieuAmNhac.h"
#include <string>

class NotNhac : public KyHieuAmNhac {
private:
	std::string caoDo;
public:
	NotNhac(std::string cd = "") : caoDo(cd) {}
	void Nhap() override;
	std::string getCaoDo();
};

