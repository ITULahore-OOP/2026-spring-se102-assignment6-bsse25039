#ifndef SPELLBLADE_H
#define SPELLBLADE_H

#include "Warrior.h"
#include "MagicalEntity.h"

class Spellblade : public Warrior, public MagicalEntity
{
public:
// constructor
    Spellblade(string name, int health, int power, int armor, int spell);
  //calculate total hybrid damage
    int calculateHybridDamage() const;
};

#endif