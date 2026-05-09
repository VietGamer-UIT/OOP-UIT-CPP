#pragma once

#include "Animal.h"

class Sheep : public Animal {
public:
	Sheep() : Animal() {}
	int sinhCon() override;
	int choSua() override;
	void tiengKeu() override;
	int getLoai() override;
};

