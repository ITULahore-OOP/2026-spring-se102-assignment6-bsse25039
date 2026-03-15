#include "Knight.h"

//constructor
   //initialize knight attributes
Knight::Knight(string name, int health, int power, int armor, int charge)
    : Warrior(name, health, power, armor)
{
    chargeBonus = charge;
}
      //calculate burst damage
                             // burst damage = base power + charge bonus
int Knight::calculateBurstDamage() const
{
    return getPower() + chargeBonus;
}