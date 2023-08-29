#include "warrior.h"
#include <iostream>
using namespace std;

 Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage) { this->_weapon = weapon; }

    void Warrior::swingWeapon(Player *opponent)
    {

        opponent->takeDamage(damage);
        std::cout << name << " swings their " << _weapon << " at " << opponent->getName() << "!\n";
    }