#include <iostream>
#include "PhepTinh.h"

using namespace std;

PhepTinh::PhepTinh(int a, int b) {
	this->a = a;
	this->b = b;
}

int PhepTinh::cong() { 
	return a + b;
}

int PhepTinh::tru() { 
	return a - b; 
}

long long PhepTinh::nhan() {
	return static_cast<long long>(a) * b; 
}

double PhepTinh::chia() { 
	if (b != 0) {
		return static_cast<double>(a) / b; 
	} else {
		cerr << "Loi: Khong the chia cho 0!" << endl;
		return 0; 
	}
}

void PhepTinh::xuatKetQua() {
	cout << "Ket qua phep tinh:" << endl;
	cout << "a + b = " << cong() << endl;
	cout << "a - b = " << tru() << endl;
	cout << "a * b = " << nhan() << endl;
	if (b != 0) {
		cout << "a / b = " << chia() << endl;
	} else {
		cout << "a / b = Khong the chia cho 0!" << endl;
	}
}