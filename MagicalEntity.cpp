#include "MagicalEntity.h"

//constructor
//initialize the magical entity attributes including spell power along with the hero properties.
MagicalEntity::MagicalEntity(string name, int health, int power, int spell)
    : Hero(name, health, power)
{
    spellPower = spell;
}