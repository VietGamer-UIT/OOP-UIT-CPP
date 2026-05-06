#pragma once
#include "Point.h"

class TamGiac {
private:
    Point a, b, c;
public:
    TamGiac();
    TamGiac(Point p1, Point p2, Point p3);
    ~TamGiac();
    Point getA() const;
    Point getB() const;
    Point getC() const;
    void setA(Point p1);
    void setB(Point p2);
    void setC(Point p3);
    void Nhap();
    void Xuat() const;
    void tinhTien(int m, int n);
    void Quay(float rad);
    void phongTo(float k_phong);
    void thuNho(float k_thu);
    void veTamGiac() const;
};