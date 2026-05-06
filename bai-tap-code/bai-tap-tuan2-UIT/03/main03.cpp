#include "TestCandidate.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n; cin >> n;
	cin.ignore();
	vector<TestCandidate> candidates(n);
	for (TestCandidate& x : candidates) {
		x.Nhap();
	}
	for (TestCandidate x : candidates) {
		if (x.tongDiem() > 15) {
			x.Xuat();
			cout << endl;
		}
		else continue;
	}
	return 0;
}