#include "DaGiac.h"
#include "TamGiac.h"
#include "TuGiac.h"
#include <iostream>

using namespace std;

int main() {
    DaGiac* daGiac = nullptr;
    cout << "Nhap vao hinh ban muon (1. Tam giac, 2. Tu giac): ";
    int loai; cin >> loai;
    switch (loai) {
    case 1: {
        daGiac = new TamGiac();
        break;
    }
    case 2: {
        daGiac = new TuGiac();
        break;
    }
    default: {
        cout << "Lua chon khong hop le!";
        return 0;
    }
    }
    daGiac->Nhap();
    daGiac->Xuat();
    cout << "Nhap vector tinh tien (x, y): ";
    int m, n;
    cin >> m >> n;
    daGiac->tinhTien(m, n);
    delete daGiac;
    daGiac = nullptr;
    return 0;
}