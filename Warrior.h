#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"

class Warrior : public Hero
{
private:
    int armorRating;        //Armor value that boosts health

public:
//constructor

    Warrior(string name, int health, int power, int armor);

//calculate total health including armour bonus

    int calculateEffectiveHealth() const;
};

#endif