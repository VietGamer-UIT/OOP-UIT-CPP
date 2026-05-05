#include "Goat.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int Goat::sinhCon() {
	int v = rand() % 5 + 1;
	cout << "So luong sinh con o de: " << v << endl;
	return v;
}

int Goat::choSua() {
	int v = rand() % 11;
	cout << "So lit sua cho o de: " << v << endl;
	return v;
}

void Goat::tiengKeu() {
	cout << "be be~~ (de)" << endl;
}

int Goat::getLoai() {
	return 3;
}