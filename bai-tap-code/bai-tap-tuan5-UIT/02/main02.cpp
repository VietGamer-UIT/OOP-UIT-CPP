#include "PhanSo.h"
#include <iostream>
using namespace std;
int main() {
    cout << "--- TEST PHAN SO ---\n";
    PhanSo a, b;
    cin >> a;
    cin >> b;
    cout << "\n[KET QUA]\n";
    cout << "Tong a + b = " << a + b;
    cout << "Hieu a - b = " << a - b;
    cout << "Tich a * b = " << a * b;
    cout << "Thuong a / b = " << a / b;
    if (a == b) cout << "=> Hai phan so bang nhau.\n";
    else cout << "=> Hai phan so khac nhau.\n";
    return 0;
}