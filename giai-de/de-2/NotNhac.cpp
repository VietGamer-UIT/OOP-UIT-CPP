#include "NotNhac.h"
#include <iostream>

using namespace std;

void NotNhac::Nhap() {
	KyHieuAmNhac::Nhap();
	cout << "Cao do: ";
	getline(cin, caoDo);
}

string NotNhac::getCaoDo() { return caoDo; }