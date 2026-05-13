#include "BanNhac.h"
#include <iostream>

using namespace std;

int main() {
	BanNhac baiHat;
	baiHat.Nhap();
	cout << "----- Ket qua -----" << endl;
	baiHat.demLangDen();
	baiHat.maxCaoDo();
	return 0;
}