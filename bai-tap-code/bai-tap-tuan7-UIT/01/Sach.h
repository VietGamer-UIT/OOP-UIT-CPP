#pragma once

#include <string>

class Sach {
protected:
	std::string ten, tacGia;
	int namPhatHanh, soTrang;
public:
	Sach(std::string t = "", std::string tg = "", int nam = 0, int st = 0) : ten(t), tacGia(tg), namPhatHanh(nam), soTrang(st) {}
	virtual ~Sach() {}
	virtual void Nhap();
	virtual void Xuat();
};