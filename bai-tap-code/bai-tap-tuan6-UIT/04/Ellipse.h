#pragma once

class Ellipse {
protected:
	float x, y;
	float r1, r2;
public:
	Ellipse(float dx = 0, float dy = 0, float banKinh1 = 0, float banKinh2 = 0) : x(dx), y(dy), r1(banKinh1), r2(banKinh2) {}
	virtual ~Ellipse() {}
	virtual void Nhap();
	virtual void Xuat();
	virtual void veHinh() = 0;
};

