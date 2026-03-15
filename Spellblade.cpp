#include "Spellblade.h"

//constructor
//initiallize both warrior and magical attributes using multiple inheritance
Spellblade::Spellblade(string name, int health, int power, int armor, int spell)
    : Warrior(name, health, power, armor),
      MagicalEntity(name, health, power, spell)
{
}
    //calculate hybrid damage
int Spellblade::calculateHybridDamage() const
{
    return Warrior::getPower() + spellPower;
}