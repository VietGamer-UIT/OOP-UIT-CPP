#include "CTime.h"
#include "CTimeSpan.h"
#include <iostream>
using namespace std;
int main() {
    cout << "--- TEST CTIME ---\n";
    CTime a, b;
    cout << "Nhap thoi diem a (gio phut giay): "; cin >> a;
    cout << "Nhap thoi diem b (gio phut giay): "; cin >> b;
    cout << "\n[KET QUA]\n";
    cout << "a = " << a;
    cout << "b = " << b;
    cout << "a + 3600 giay = " << a + 3600;
    cout << "b - 120 giay = " << b - 120;
    CTimeSpan khoangCach = a - b;
    cout << "Khoang cach giua a va b = " << khoangCach << "\n";
    a++;
    cout << "a++ (tang 1s) = " << a;
    return 0;
}