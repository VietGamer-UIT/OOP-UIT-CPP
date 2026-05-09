#include "Cow.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int Cow::sinhCon() {
	int v = rand() % 5 + 1;
	cout << "So luong sinh o bo: " << v << endl;
	return v;
}

int Cow::choSua() {
	int v = rand() % 21;
	cout << "So lit sua cho o bo: " << v << endl;
	return v;
}

void Cow::tiengKeu() {
	cout << "um bo~~" << endl;
}

int Cow::getLoai() {
	return 1;
}