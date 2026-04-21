#define _CRT_SECURE_NO_WARNINGS

#include "CString.h"
#include <iostream>
using namespace std;
int main() {
    cout << "--- TEST CSTRING ---\n";
    CString a, b;
    cout << "Nhap chuoi a (khong dau cach): "; cin >> a;
    cout << "Nhap chuoi b (khong dau cach): "; cin >> b;
    cout << "\n[KET QUA]\n";
    cout << "Chuoi a = " << a << "\n";
    cout << "Chuoi b = " << b << "\n";
    CString c = a + b;
    cout << "Chuoi c (a+b) = " << c << "\n";
    if (a == b) cout << "=> a va b giong nhau.\n";
    else if (a > b) cout << "=> a lon hon b.\n";
    else cout << "=> a nho hon b.\n";
    return 0;
}