/*
 * Project: Mini RPG Battle System (Turn-based Game)
 * Author: Doan Hoang Viet (Viet Gamer) - UIT K20
 * Date: 07/02/2026 (Coded in Ben Tre)
 * Description:
 * A simple console-based Turn-based RPG simulation,
 * demonstrating Object-Oriented Programming (OOP) concepts.
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// === CLASS CHA (BASE CLASS) ===
class Character {
protected:
    string name;
    int hp;
    int damage;
public:
    // Constructor
    Character(string n, int h, int d) : name(n), hp(h), damage(d) {}

    // Getter
    string getName() { return name; }
    int getHP() { return hp; }

    // Kiem tra song chet
    bool isAlive() { return hp > 0; }

    // Nhan sat thuong
    void takeDamage(int dmg) {
        hp -= dmg;
        if (hp < 0) hp = 0;
        cout << "\t-> " << name << " took " << dmg << " damage! (HP left: " << hp << ")\n";
    }

    // Ham thuan ao (Pure Virtual Function)
    virtual void useSkill(Character* target) = 0;

    // Destructor ao
    virtual ~Character() {}
};

// === CLASS CON 1: HERO ===
class Hero : public Character {
public:
    Hero(string n, int h, int d) : Character(n, h, d) {}

    void useSkill(Character* target) override {
        int chance = rand() % 100;
        // 10% chi mang
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

// === CLASS CON 2: MONSTER ===
class Monster : public Character {
public:
    Monster(string n, int h, int d) : Character(n, h, d) {}

    void useSkill(Character* target) override {
        int chance = rand() % 100;
        // 20% hoi mau
        if (chance < 20) {
            int healAmount = 20;
            hp += healAmount;
            cout << "[MONSTER] " << name << " used HEAL (restored " << healAmount << " HP)!\n";
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

    // --- SETUP HERO ---
    string heroNames[] = { "Viet Gamer", "Hiep Si Mu", "Thanh Giong", "Saitama" };
    string nameHero = heroNames[rand() % 4];
    int hpHero = 100 + rand() % 101; // Mau 100-200
    int dmgHero = 15 + rand() % 11;  // Dame 15-25

    Character* myHero = new Hero(nameHero, hpHero, dmgHero);

    cout << "=== HERO SINH RA TU DONG ===\n";
    cout << "Ten: " << nameHero << " | HP: " << hpHero << " | Dame: " << dmgHero << "\n\n";

    // --- SETUP MONSTER ---
    string mobNames[] = { "Slime", "Goblin", "Rong Lua", "Quai Vat" };
    string nameMob = mobNames[rand() % 4];
    int hpMob = 50 + rand() % 151;   // Mau 50-200
    int dmgMob = 5 + rand() % 16;    // Dame 5-20

    Character* boss = new Monster(nameMob, hpMob, dmgMob);

    cout << "=== MONSTER XUAT HIEN ===\n";
    cout << "Ten: " << nameMob << " | HP: " << hpMob << " | Dame: " << dmgMob << "\n";
    cout << "-----------------------------\n";

    int round = 1;

    // --- BATTLE LOOP ---
    while (myHero->isAlive() && boss->isAlive()) {
        cout << "--- Round " << round << " ---\n";

        // Hero danh truoc
        myHero->useSkill(boss);
        if (!boss->isAlive()) {
            cout << "\n>>> VICTORY! " << boss->getName() << " has been defeated <<<\n";
            break;
        }

        // Boss danh tra
        boss->useSkill(myHero);
        if (!myHero->isAlive()) {
            cout << "\n>>> GAME OVER! " << myHero->getName() << " has been defeated <<<\n";
            break;
        }

        round++;
        cout << endl;
    }

    // Giai phong bo nho
    delete myHero;
    delete boss;

    return 0;
}
