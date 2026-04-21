#include "CTimeSpan.h"
#include <iostream>
using namespace std;
int main() {
    cout << "--- TEST CTIMESPAN ---\n";
    CTimeSpan a, b;
    cout << "Nhap a (gio phut giay cach nhau boi khoang trang): "; cin >> a;
    cout << "Nhap b (gio phut giay cach nhau boi khoang trang): "; cin >> b;
    cout << "\n[KET QUA]\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "Tong = " << a + b << "\n";
    cout << "Hieu = " << a - b << "\n";
    if (a >= b) cout << "=> a dai hon hoac bang b.\n";
    else cout << "=> a ngan hon b.\n";
    return 0;
}