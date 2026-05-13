#include "BanNhac.h"
#include "KyHieuAmNhac.h"
#include "NotNhac.h"
#include "DauLang.h"
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void BanNhac::Nhap() {
	cout << "Nhap so luong ky hieu am nhac: ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Nhap ky hieu not (1. Not nhac, 2. Dau lang): ";
		int loai; cin >> loai;
		cin.ignore();
		switch (loai) {
		case 1: {
			banNhac.push_back(new NotNhac());
			banNhac.back()->Nhap();
			break;
		}
		case 2: {
			banNhac.push_back(new DauLang());
			banNhac.back()->Nhap();
			break;
		}
		}
	}
}

void BanNhac::demLangDen() {
	int dem = 0;
	for (KyHieuAmNhac* x : banNhac) {
		DauLang* dl = dynamic_cast<DauLang*>(x);
		if (dl != nullptr) {
			if (x->getTruongDo() == 1) {
				dem++;
			}
		}
	}
	cout << "So luong dau lang den (Q) trong ban nhac la: " << dem << endl;
}

int giaTriCaoDo(string cd) {
	if (cd == "C") return 1;
	if (cd == "D") return 2;
	if (cd == "E") return 3;
	if (cd == "F") return 4;
	if (cd == "G") return 5;
	if (cd == "A") return 6;
	if (cd == "B") return 7;
	return 0;
}

void BanNhac::maxCaoDo() {
	NotNhac* noteMax = nullptr;
	int max = INT_MIN;
	for (KyHieuAmNhac* x : banNhac) {
		NotNhac* n = dynamic_cast<NotNhac*>(x);
		if (n != nullptr) {
			int currentMax = giaTriCaoDo(n->getCaoDo());
			if (currentMax > max) {
				max = currentMax;
				noteMax = n;
			}
		}
	}
	if (noteMax != nullptr) {
		cout << "Not nhac co cao do cao nhat la: " << noteMax->getKyHieuNot() << " (" << noteMax->getCaoDo() << ")" << endl;
	}
}

BanNhac::~BanNhac() {
	for (KyHieuAmNhac* x : banNhac) {
		delete x;
	}
}