#pragma once

#include "Personality.h"

class TinhC : public Personality {
public:
	TinhC() : Personality() {}
	void Xuat() override;
	bool isNguyCoCao() override;
};

