#include "wizard.h"
#include <iostream>
using namespace std;
Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage)
    {
        this->_mana = mana;
    }

    void Wizard::castSpell(Player *opponent)
    {
        opponent->setHealth(opponent->getHealth() - _mana);
        std::cout << name << " casts a spell on " << opponent->getName() << " for " << _mana << " damage.\n";
    }