#pragma once

#include "Personality.h"

class TinhN : public Personality {
public:
	TinhN() : Personality() {}
	void Xuat() override;
	bool isNguyCoCao() override;
};

