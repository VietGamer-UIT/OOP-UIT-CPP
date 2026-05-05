#pragma once

#include <string>

class NhanVien {
protected:
	std::string hoTen, ngaySinh;
	float luong;
public:
	NhanVien(std::string ht = "", std::string ns = "", float l = 0) : hoTen(ht), ngaySinh(ns), luong(l) {}
	virtual ~NhanVien() {}
	virtual void Nhap();
	virtual void Xuat();
	virtual void tinhLuong() = 0;
};