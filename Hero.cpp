#include "Hero.h"

//contructor
  //lets initialiize hero attributes
Hero::Hero(string n, int h, int p)
{
    name = n;
    health = h;
    basePower = p;
}

//return hero name
string Hero::getName() const
{
    return name;
}

//return hero health
int Hero::getHealth() const
{
    return health;
}

//return hero powers
int Hero::getPower() const
{
    return basePower;
}
                       //damage
void Hero::takeDamage(int damage)
{
    health -= damage;
    if (health < 0)
        health = 0;
}
             //operator > (compare base power of 2 heroes & return true if current hero is stong )
bool Hero::operator>(const Hero &other) const
{
    return basePower > other.basePower;
}
   //operator+ return combine vitality of 2 heroes
int Hero::operator+(const Hero &other) const
{
    return health + other.health;
}