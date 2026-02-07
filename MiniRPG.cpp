/*
 * Project: Mini RPG Battle System (Turn-based Game)
 * Author: Doan Hoang Viet (Viet Gamer) - UIT K20
 * Date: 07/02/2026 (Coded in Ben Tre)
 * Description:
 * A simple console-based Turn-based RPG simulation,
 * demonstrating Object-Oriented Programming (OOP) concepts.
 * Features:
 * - Polymorphism: Using base class pointers (Character*) to manage derived classes.
 * - Abstract Class: Pure virtual function useSkill() enforcing override in derived classes.
 * - RNG Mechanism: Handling Critical Strike and Healing probabilities.
 * - Memory Management: Dynamic allocation (new) and deallocation (delete) to prevent memory leaks.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Class cha
class Character {
protected:
	string name;
	int hp;
	int damage;
public:
	Character() {};
	Character(string n, int h, int d) : name(n), hp(h), damage(d) {}
	string getName() { return name; }
	int getHP() { return hp; }
	bool isAlive() { return hp > 0; }
	void takeDamage(int dmg) {
		hp -= dmg;
		if (hp < 0) hp = 0;
		cout << "\t-> " << name << " took " << dmg << " damage! (HP left: " << hp << ")\n";
	}
	virtual void useSkill(Character* target) = 0;
	virtual ~Character() {}
};

//Class con 1
class Hero : public Character {
public:
	Hero(string n) : Character(n, 100, 25) {}
	void useSkill(Character* target) override {
		int chance = rand() % 100;
		if (chance < 10) {
			cout << "[HERO] " << name << " used CRITICAL STRIKE!\n";
			target->takeDamage(damage * 2);
		}
		else {
			cout << "[HERO] " << name << " attacked normally.\n";
			target->takeDamage(damage);
		}
	}
};

//Class con 2
class Monster : public Character {
public:
	Monster(string n) : Character(n, 150, 15) {}
	void useSkill(Character* target) override {
		int chance = rand() % 100;
		if (chance < 20) {
			cout << "[MONSTER] " << name << " used HEAL (restored 20 HP)!\n";
			hp += 20;
			cout << "\t-> Current HP: " << hp << endl;
		}
		else {
			cout << "[MONSTER] " << name << " bit the enemy.\n";
			target->takeDamage(damage);
		}
	}
};

int main()
{
	srand(time(0));
	Character* myHero = new Hero("Viet Gamer");
	Character* boss = new Monster("Veigar");
	cout << "=== BATTLE START: " << myHero->getName() << " VS " << boss->getName() << " ===\n";
	int round = 1;
	while (myHero->isAlive() && boss->isAlive()) {
		cout << "--- Round " << round << " ---\n";
		myHero->useSkill(boss);
		if (!boss->isAlive()) {
			cout << "\t-> VICTORY! " << boss->getName() << " has been defeated\n";
			break;
		}
		boss->useSkill(myHero);
		if (!myHero->isAlive()) {
			cout << "\t-> GAME OVER! " << myHero->getName() << " has been defeated\n";
			break;
		}
		round++;
	}
	delete myHero;
	delete boss;
	return 0;
}
