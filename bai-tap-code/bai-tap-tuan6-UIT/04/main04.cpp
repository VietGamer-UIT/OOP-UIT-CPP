#include "Circle.h"
#include "Ellipse.h"
#include <iostream>

using namespace std;

int main() {
	Circle* hinhHoc = new Circle();
	hinhHoc->Nhap();
	hinhHoc->Xuat();
	hinhHoc->veHinh();
	delete hinhHoc;
	return 0;
}