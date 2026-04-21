#include "CDate.h"
#include <iostream>
using namespace std;
int main() {
    cout << "--- TEST CDATE ---\n";
    CDate a, b;
    cin >> a;
    cin >> b;
    cout << "\n[KET QUA]\n";
    cout << "Ngay a = " << a;
    cout << "Ngay b = " << b;
    cout << "a + 10 ngay = " << a + 10;
    cout << "b - 5 ngay = " << b - 5;
    cout << "Khoang cach = " << a - b << " ngay.\n";
    a++;
    cout << "a++ (tang 1 ngay) = " << a;
    return 0;
}