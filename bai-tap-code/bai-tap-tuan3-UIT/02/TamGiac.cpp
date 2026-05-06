#include "TamGiac.h"
#include <iostream>

using namespace std;

TamGiac::TamGiac() {}
TamGiac::TamGiac(Point p1, Point p2, Point p3) : a(p1), b(p2), c(p3) {}
TamGiac::~TamGiac() {}

Point TamGiac::getA() const { return a; }
Point TamGiac::getB() const { return b; }
Point TamGiac::getC() const { return c; }

void TamGiac::setA(Point p1) { a = p1; }
void TamGiac::setB(Point p2) { b = p2; }
void TamGiac::setC(Point p3) { c = p3; }

void TamGiac::Nhap() {
    cout << "Nhap toa do dinh A:\n"; a.Nhap();
    cout << "Nhap toa do dinh B:\n"; b.Nhap();
    cout << "Nhap toa do dinh C:\n"; c.Nhap();
}

void TamGiac::Xuat() const {
    cout << "Tam giac tao boi 3 diem:\n";
    cout << "A"; a.Xuat(); cout << "\n";
    cout << "B"; b.Xuat(); cout << "\n";
    cout << "C"; c.Xuat(); cout << "\n";
}

void TamGiac::tinhTien(int m, int n) {
    a.tinhTien(m, n);
    b.tinhTien(m, n);
    c.tinhTien(m, n);
}

void TamGiac::Quay(float rad) {
    a.Quay(rad);
    b.Quay(rad);
    c.Quay(rad);
}

void TamGiac::phongTo(float k_phong) {
    a.phongTo(k_phong);
    b.phongTo(k_phong);
    c.phongTo(k_phong);
}

void TamGiac::thuNho(float k_thu) {
    if (k_thu != 0) {
        a.thuNho(k_thu);
        b.thuNho(k_thu);
        c.thuNho(k_thu);
    }
    else {
        cout << "Loi: He so thu nho phai khac 0!\n";
    }
}

void TamGiac::veTamGiac() const {
    cout << "         A"; a.Xuat(); cout << "\n";
    cout << "        / \\ " << "\n";
    cout << "       /   \\ " << "\n";
    cout << "      /     \\ " << "\n";
    cout << "     /       \\ " << "\n";
    cout << "  B"; b.Xuat(); cout << "-------C"; c.Xuat(); 
    cout << "\n";
}