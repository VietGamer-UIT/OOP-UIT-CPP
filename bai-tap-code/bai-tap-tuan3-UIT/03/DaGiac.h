#pragma once
#include "Point.h"

class DaGiac {
private:
	int n;
	Point* dinh;
public:
	DaGiac();
	~DaGiac();
	void Nhap();
	void Xuat() const;
	void tinhTien(int m, int n);
	void Quay(float rad);
	void phongTo(float k_phong);
	void thuNho(float k_thu);
	void veDaGiac() const;
};

