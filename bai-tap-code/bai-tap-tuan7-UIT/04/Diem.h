#pragma once

class Diem {
private:
	float x, y;
public:
	Diem(float _x = 0, float _y = 0) : x(_x), y(_y) {}
	void Nhap();
	void Xuat();
	void tinhTien(int m, int n);
};
