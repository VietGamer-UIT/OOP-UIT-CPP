#pragma once

#include "Personality.h"

class TinhE : public Personality {
public:
	TinhE() : Personality() {}
	void Xuat() override;
	bool isNguyCoCao() override;
};

