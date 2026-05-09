#pragma once

#include "Animal.h"

class Goat : public Animal {
public:
	Goat() : Animal() {}
	int sinhCon() override;
	int choSua() override;
	void tiengKeu() override;
	int getLoai() override;
};

