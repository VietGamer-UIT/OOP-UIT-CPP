#pragma once

class HinhThang {
protected:
	float x, y;
	float dayDuoi, dayTren;
	float chieuCao, doLech;
public:
	HinhThang(float _x = 0, float _y = 0, float dd = 0, float dt = 0, float cc = 0, float dl = 0) : x(_x), y(_y), dayDuoi(dd), dayTren(dt), chieuCao(cc), doLech(dl) {}
	virtual ~HinhThang() {}
	virtual void Nhap();
	virtual void Xuat();
	void veHinh();
};