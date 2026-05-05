#pragma once

class Animal {
public:
	Animal() {}
	virtual ~Animal() {}
	virtual int sinhCon() = 0;
	virtual int choSua() = 0;
	virtual void tiengKeu() = 0;
	virtual int getLoai() = 0;
};