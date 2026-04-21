#include "DaThuc.h"
#include <iostream>
using namespace std;
int main() {
    cout << "--- TEST DATHUC ---\n";
    DaThuc a, b;
    cout << "[Nhap Da Thuc a]\n"; cin >> a;
    cout << "\n[Nhap Da Thuc b]\n"; cin >> b;
    cout << "\n[KET QUA]\n";
    cout << "Da thuc a = " << a << "\n";
    cout << "Da thuc b = " << b << "\n";
    DaThuc tong = a + b;
    cout << "Tong a + b = " << tong << "\n";
    DaThuc hieu = a - b;
    cout << "Hieu a - b = " << hieu << "\n";
    return 0;
}