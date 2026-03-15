#ifndef KNIGHT_H
#define KNIGHT_H

#include "Warrior.h"
                    //knight is the specialized warrior
class Knight : public Warrior
{
private:
    int chargeBonus;      //additional damage during charge

public:
    Knight(string name, int health, int power, int armor, int charge);

// calculate burst damage during charge

    int calculateBurstDamage() const;
};

#endif