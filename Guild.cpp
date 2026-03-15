#include "Guild.h"

//constructor
  //initialize guild name and member count
Guild::Guild(string name)
{
    guildName = name;
    memberCount = 0;
}

// destructor
Guild::~Guild()
{

    cout << "The guild " << guildName << " has been disbanded!" << endl;
}

//operator +=  add hero to guild roster maximum capacity is 15
void Guild::operator+=(Hero* newHero)
{
    if (memberCount < 15)
    {
        roster[memberCount] = newHero;
        memberCount++;
    }
    else
    {
        cout << "Guild is at full capacity!" << endl;
    }
}
        //calculatetotalguildpower
int Guild::calculateTotalGuildPower() const
{
    int total = 0;

    for (int i = 0; i < memberCount; i++)
    {
        total += roster[i]->getPower();
    }

    return total;
}
   //display the guild stats print overall guild statics
void Guild::displayGuildStats() const
{
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

//operator << allow printing guild detail using the cout <<guild
ostream& operator<<(ostream& os, const Guild& g)
{
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;

    for (int i = 0; i < g.memberCount; i++)
    {
        os << "- " << g.roster[i]->getName()
           << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }

    return os;
}