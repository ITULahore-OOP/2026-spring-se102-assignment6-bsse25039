#ifndef HERO_H
#define HERO_H

#include <string>
using namespace std;

class Hero
{
private:
    string name;    //name of the hero
    int health;       //current health points
    int basePower;             //basic attack power

public:
        //constructor to imitiallize the hero attributes
    Hero(string n, int h, int p);

   //getter function
    string getName() const;
    int getHealth() const;
    int getPower() const;

//reduce health where hero receives damage
    void takeDamage(int damage);

     //operator overloader
    bool operator>(const Hero &other) const;
    int operator+(const Hero &other) const;
};

#endif