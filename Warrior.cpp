#include "Warrior.h"

//constructor
   //initialize the warrior attributes

Warrior::Warrior(string name, int health, int power, int armor)
    : Hero(name, health, power)
{
    armorRating = armor;
}
       //calculate the effective health

int Warrior::calculateEffectiveHealth() const
{
    return getHealth() + (armorRating * 2);
}