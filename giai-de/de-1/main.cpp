#include "ChungCu.h"
#include "CCVinHome.h"
#include "CCBcon.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	cout << "Nhap so luong chung cu Vinhomes va Bcons: ";
	int n; cin >> n;
	vector<ChungCu*> danhSach;
	for (int i = 0; i < n; i++) {
		cout << "Nhap ten dai dien so huu (1. Vinhomes, 2. Bcons) thu " << i + 1 << ": ";
		int loai; cin >> loai;
		cin.ignore();
		switch (loai) {
		case 1: {
			danhSach.push_back(new CCVinHome());
			break;
		}
		case 2: {
			danhSach.push_back(new CCBcon());
			break;
		}
		default:
			break;
		}
	}
	for (ChungCu* x : danhSach) {
		x->Nhap();
		x->guiThongBao();
		x->tienPhong();
	}
	for (ChungCu* x : danhSach) {
		delete x;
	}
	danhSach.clear();
	return 0;
}