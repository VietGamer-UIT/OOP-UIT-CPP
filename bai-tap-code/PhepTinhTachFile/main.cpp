#include <iostream>
#include "PhepTinh.h"

using namespace std;

int main() {
	PhepTinh pt(100, 200);
	pt.xuatKetQua();
	cout << "-------------------" << endl;
	PhepTinh pt2(150, 0);
	pt2.xuatKetQua();
	return 0;
}