#include <iostream>
#include <vector>
#include "Header.h"

using namespace std;

int main() {
	vector<Character*> characters;
	Character* arthur = new Warrior("Arthur", 1000);
	Character* veera = new Mage("Veera", 600);
	characters.push_back(arthur);
	characters.push_back(veera);
	for (Character* x : characters) {
		cout << *x;
		x->attack();
		cout << "--------------------\n";
	}
	for (Character* x : characters) {
		delete x;
	}
	return 0;
}