#include "Animal.h"
#include "Cow.h"
#include "Goat.h"
#include "Sheep.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int soLuongBo;
	cout << "Nhap so luong bo: ";
	cin >> soLuongBo;
	int soLuongCuu;
	cout << "Nhap so luong cuu: ";
	cin >> soLuongCuu;
	int soLuongDe;
	cout << "Nhap so luong de: ";
	cin >> soLuongDe;
	cin.ignore();
	vector<Animal*> tongConVat;
	for (int i = 0; i < soLuongBo; i++) {
		tongConVat.push_back(new Cow());
	}
	for (int i = 0; i < soLuongCuu; i++) {
		tongConVat.push_back(new Sheep());
	}
	for (int i = 0; i < soLuongDe; i++) {
		tongConVat.push_back(new Goat());
	}
	for (Animal* x : tongConVat) {
		x->tiengKeu();
	}
	int tongSua = 0;
	int soBoSinhThem = 0;
	int soCuuSinhThem = 0;
	int soDeSinhThem = 0;
	for (Animal* x : tongConVat) {
		tongSua += x->choSua();
		if (x->getLoai() == 1) {
			soBoSinhThem += x->sinhCon();
		}
		else if (x->getLoai() == 2) {
			soCuuSinhThem += x->sinhCon();
		}
		else {
			soDeSinhThem += x->sinhCon();
		}
	}
	cout << "Tong bo hien tai: " << soLuongBo + soBoSinhThem << endl;
	cout << "Tong cuu hien tai: " << soLuongCuu + soCuuSinhThem << endl;
	cout << "Tong de hien tai: " << soLuongDe + soDeSinhThem << endl;
	cout << "Tong lit sua: " << tongSua << endl;
	for (Animal* x : tongConVat) {
		delete x;
	}
	tongConVat.clear();
	return 0;
}