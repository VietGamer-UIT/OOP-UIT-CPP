#include "DanhSach.h"
#include <iostream>

using namespace std;

int main() {
    DanhSach ds;
    ds.Nhap();
    cout << "\n--- PHAN TU MANH NHAT ---" << endl;
    ds.maxSatThuong();
    int i, j;
    cout << "\nNhap vi tri hai phan tu muon so sanh (vi du 0 va 1): ";
    if (cin >> i >> j) {
        ds.soSanhTrongDanhSach(i, j);
    }

    return 0;
}