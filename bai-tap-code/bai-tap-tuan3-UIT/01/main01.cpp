#include "Point.h"
#include <iostream>

using namespace std;

int main() {
    Point p;
    cout << "Nhap diem (x,y): ";
    p.Nhap();
    cout << "\nTINH TIEN\n";
    int m, n;
    cout << "Nhap vector tinh tien (m,n): ";
    cin >> m >> n;
    p.tinhTien(m, n);
    cout << "Sau khi tinh tien: "; p.Xuat(); 
    cout << "\nQUAY\n";
    float rad;
    cout << "Nhap goc quay (radian): ";
    cin >> rad;
    p.Quay(rad);
    cout << "Sau khi quay: "; p.Xuat(); cout << "\n";
    return 0;
}