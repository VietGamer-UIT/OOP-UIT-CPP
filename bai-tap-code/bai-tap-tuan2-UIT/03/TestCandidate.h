#pragma once
#include <string>

using namespace std;

class TestCandidate {
private:
	string id;
	string name;
	string ngaySinh;
	float diemToan;
	float diemVan;
	float diemAnh;
public:
	void Nhap();
	void Xuat();
	float tongDiem();
};