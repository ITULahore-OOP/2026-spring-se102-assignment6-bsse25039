#ifndef GUILD_H
#define GUILD_H

#include "Hero.h"
#include <iostream>
using namespace std;

class Guild
{
private:
    string guildName;     //name of guild
    Hero* roster[15];      // array of the heros pointer
    int memberCount;   //current heroes number

public:
    Guild(string name);
    ~Guild();        //destructor

    //overload += operator to recruit heroes
    void operator+=(Hero* newHero);

     //calculate  the total power of  the guild members
    int calculateTotalGuildPower() const;

//display the statistics of guild
    void displayGuildStats() const;

//overloaded operator << operator to print the guild information
    friend ostream& operator<<(ostream& os, const Guild& g);
};

#endif