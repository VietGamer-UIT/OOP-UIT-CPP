#pragma once

#include <string>

class ChungCu {
protected:
	std::string ten;
	int soTang;
	float dienTich;
	std::string tenQL;
	std::string soHuu;
public:
	ChungCu(std::string t = "", int st = 0, float dt = 0, std::string ql = "", std::string sh = "") : ten(t), soTang(st), dienTich(dt), tenQL(ql), soHuu(sh) {}
	virtual ~ChungCu() {}
	virtual void Nhap();
	virtual void guiThongBao();
	virtual void tienPhong() = 0;
};