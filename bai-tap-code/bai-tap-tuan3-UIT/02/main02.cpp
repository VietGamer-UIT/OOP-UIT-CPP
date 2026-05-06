#include "TamGiac.h"
#include <iostream>

using namespace std;

int main() {
    TamGiac tg;
    tg.Nhap();
    cout << "\n---KHOI TAO BAN DAU---\n";
    tg.Xuat();
    tg.veTamGiac();
    cout << "\n---TINH TIEN---\n";
    int m, n;
    cout << "Nhap vector tinh tien (dx dy): ";
    cin >> m >> n;
    tg.tinhTien(m, n);
    tg.Xuat();
    cout << "\n---QUAY---\n";
    float rad;
    cout << "Nhap goc quay (radian): ";
    cin >> rad;
    tg.Quay(rad);
    tg.Xuat();
    cout << "\n---PHONG TO---\n";
    float k_phong;
    cout << "Nhap he so phong to: ";
    cin >> k_phong;
    tg.phongTo(k_phong);
    tg.Xuat();
    cout << "\n---THU NHO---\n";
    float k_thu;
    cout << "Nhap he so thu nho: ";
    cin >> k_thu;
    tg.thuNho(k_thu);
    tg.Xuat();
    cout << "\n---KET QUA CUOI CUNG---\n";
    tg.veTamGiac();
    return 0;
}