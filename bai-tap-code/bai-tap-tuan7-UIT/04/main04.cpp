#include "DaGiac.h"
#include "TamGiac.h"
#include "TuGiac.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
#include <iostream>

using namespace std;

int main() {
    DaGiac* daGiac = nullptr;
    cout << "Chon loai hinh ban muon nhap:" << endl;
    cout << "1. Tam giac" << endl;
    cout << "2. Tu giac" << endl;
    cout << "3. Hinh binh hanh" << endl;
    cout << "4. Hinh chu nhat" << endl;
    cout << "5. Hinh vuong" << endl;
    cout << "Nhap lua chon (1-5): ";
    int loai;
    cin >> loai;
    switch (loai) {
    case 1:
        daGiac = new TamGiac();
        break;
    case 2:
        daGiac = new TuGiac();
        break;
    case 3:
        daGiac = new HinhBinhHanh();
        break;
    case 4:
        daGiac = new HinhChuNhat();
        break;
    case 5:
        daGiac = new HinhVuong();
        break;
    default:
        cout << "Lua chon khong hop le! Ket thuc chuong trinh." << endl;
        return 0;
    }
    if (daGiac != nullptr) {
        daGiac->Nhap();
        cout << "\nToa do cac dinh vua nhap:" << endl;
        daGiac->Xuat();
        cout << "\nNhap vector tinh tien (dx, dy): ";
        int dx, dy;
        cin >> dx >> dy;
        daGiac->tinhTien(dx, dy);
    }
    delete daGiac;
    daGiac = nullptr;
    return 0;
}