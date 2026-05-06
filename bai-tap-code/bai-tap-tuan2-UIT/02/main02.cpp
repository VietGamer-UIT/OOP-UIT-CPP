#include "SoPhuc.h"
#include <iostream>

using namespace std;

int main() {
	SoPhuc a, b;
	cin >> a >> b;
	cout << "Tong: " << a + b << endl;
	cout << "Hieu: " << a - b << endl;
	cout << "Tich: " << a * b << endl;
	cout << "Thuong: " << a / b << endl;
	return 0;
}