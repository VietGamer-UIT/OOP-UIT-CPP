#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(float hoanh, float tung) : x(hoanh), y(tung) {}

Point::~Point() {}

float Point::getX() const { return x; }
float Point::getY() const { return y; }

void Point::setX(float hoanh) { x = hoanh; }
void Point::setY(float tung) { y = tung; }

void Point::Nhap() {
    cin >> x >> y;
}

void Point::Xuat() const {
    cout << "(" << x << ", " << y << ")";
}

void Point::tinhTien(int m, int n) {
    x += m;
    y += n;
}

void Point::Quay(float rad) {
    float x_new = x * cos(rad) - y * sin(rad);
    float y_new = x * sin(rad) + y * cos(rad);
    x = x_new;
    y = y_new;
}

void Point::phongTo(float k) {
    x *= k;
    y *= k;
}

void Point::thuNho(float k) {
    if (k != 0) {
        x /= k;
        y /= k;
    }
    else {
        cout << "Loi: He so thu nho phai khac 0!\n";
    }
}