#pragma once

#include "Animal.h"

class Cow : public Animal{
public:
	Cow() : Animal() {}
	int sinhCon() override;
	int choSua() override;
	void tiengKeu() override;
	int getLoai() override;
};

