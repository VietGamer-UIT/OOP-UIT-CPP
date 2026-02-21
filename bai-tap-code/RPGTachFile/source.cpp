#include <iostream>
#include "Header.h"

using namespace std;

void Character::setHP(int h) {
	if (h < 0) {
		hp = 0;
	}
	else {
		hp = h;
	}
}

void Warrior::attack() {
	cout << "Bo cui! Gay sat thuong vat ly.\n";
}

void Mage::attack() {
	cout << "Cau lua! Gay sat thuong phep thuat.\n";
}

ostream& operator << (ostream& out, const Character& c) {
	out << "Name: " << c.name << " | HP: " << c.hp << endl;
	return out;
}