#pragma once

#include <string>

class NhanVat {
protected:
	float capDo, satThuong;
	std::string monPhai;
public:
	NhanVat(float cd = 0, float st = 0, std::string mp = "") : capDo(cd), satThuong(st), monPhai(mp) {}
	virtual ~NhanVat() {}
	virtual void Nhap();
	virtual void Xuat();
	virtual float tongSatThuong() = 0;
	int getHe(std::string mp);
	static float heSo(int h1, int h2);
	std::string getMonPhai() { return monPhai; }
};

