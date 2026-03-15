#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

#include "Hero.h"

class MagicalEntity : public Hero
{
protected:
    int spellPower;   //magical attack strength

public:
    // constructor to initialize magical entity attributes
    MagicalEntity(string name, int health, int power, int spell);
};

#endif