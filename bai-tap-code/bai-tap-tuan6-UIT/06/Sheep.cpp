#include "Sheep.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int Sheep::sinhCon() {
	int v = rand() % 5 + 1;
	cout << "So luong sinh con o cuu: " << v << endl;
	return v;
}

int Sheep::choSua() {
	int v = rand() % 6;
	cout << "So lit sua cho o cuu: " << v << endl;
	return v;
}

void Sheep::tiengKeu() {
	cout << "be be~~ (cuu)" << endl;
}

int Sheep::getLoai() {
	return 2;
}
