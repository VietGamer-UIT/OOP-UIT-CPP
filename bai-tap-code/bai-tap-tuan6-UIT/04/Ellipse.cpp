#include "Ellipse.h"
#include <iostream>

using namespace std;

void Ellipse::Nhap() {
	cout << "Nhap toa do tam Ellipse (x, y): ";
	cin >> x >> y;
	cout << "Nhap do dai truc lon: ";
	cin >> r1;
	cout << "Nhap do dai truc be: ";
	cin >> r2;
}

void Ellipse::Xuat() {
	cout << "Toa do tam Ellipse (x, y): " << "(" << x << ", " << y << ")" << endl;
	cout << "Do dai truc lon: " << r1 << endl;
	cout << "Do dai truc be: " << r2 << endl;
}