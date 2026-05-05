#pragma once

#include <string>

class People {
protected:
	std::string hoTen, ngaySinh;
public:
	People(std::string ht = "", std::string ns = "") : hoTen(ht), ngaySinh(ns) {}
	virtual ~People() {}
	virtual void Nhap();
	virtual void Xuat();
};