#include "DaGiac.h"
#include <iostream>

using namespace std;

int main() {
    DaGiac dg;
    dg.Nhap();
    cout << "\n---TRANG THAI BAN DAU---\n";
    dg.Xuat();
    int m, n;
    cout << "\nNhap vector tinh tien (dx dy): ";
    cin >> m >> n;
    dg.tinhTien(m, n);
    cout << "=> Sau khi tinh tien:\n";
    dg.Xuat();
    float k_phong;
    cout << "\nNhap he so phong to: ";
    cin >> k_phong;
    dg.phongTo(k_phong);
    cout << "=> Sau khi phong to:\n";
    dg.Xuat();
    dg.veDaGiac();
    return 0;
}