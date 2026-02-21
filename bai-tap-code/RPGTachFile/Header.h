#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character {
private:
	string name;
	int hp;
public:
	Character(string n, int h) : name(n), hp(h) {};
	void setHP(int h);
	friend ostream& operator << (ostream& out, const Character& c);
	virtual void attack() = 0;
};

class Warrior : public Character {
public:
	Warrior(string n, int h) : Character(n, h) {}
	void attack() override;
};

class Mage : public Character {
public:
	Mage(string n, int h) : Character(n, h) {};
	void attack() override;
};