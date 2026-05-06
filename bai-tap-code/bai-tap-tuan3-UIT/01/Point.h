#pragma once

class Point {
private:
    float x;
    float y;
public:
    Point(float hoanh = 0, float tung = 0);
    ~Point();
    float getX() const;
    float getY() const;
    void setX(float hoanh);
    void setY(float tung);
    void Nhap();
    void Xuat() const;
    void tinhTien(int m, int n);
    void Quay(float rad);
    void phongTo(float k_phong);
    void thuNho(float k_thu);
};