#include "SoPhuc.h"
#include <iostream>
using namespace std;
int main() {
    cout << "--- TEST SO PHUC ---\n";
    SoPhuc a, b;
    cin >> a;
    cin >> b;
    cout << "\n[KET QUA]\n";
    cout << "Tong a + b = " << a + b;
    cout << "Hieu a - b = " << a - b;
    cout << "Tich a * b = " << a * b;
    cout << "Thuong a / b = " << a / b;
    if (a == b) cout << "=> Hai so phuc bang nhau.\n";
    else if (a > b) cout << "=> So phuc a lon hon b.\n";
    else cout << "=> So phuc a nho hon hoac khac b.\n";
    return 0;
}