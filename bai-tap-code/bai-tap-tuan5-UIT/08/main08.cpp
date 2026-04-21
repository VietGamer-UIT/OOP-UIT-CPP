#include "CMatrix.h"
#include "CVector.h"
#include <iostream>
using namespace std;

int main() {
	CMatrix a, b;
	cout << "Nhap ma tran A:\n";
	cin >> a;
	cout << "Nhap ma tran B:\n";
	cin >> b;
	cout << "A * B:\n" << a * b;
	CVector v;
	cin >> v;
	cout << "A * v:\n" << a * v << "\n";
	return 0;
}2