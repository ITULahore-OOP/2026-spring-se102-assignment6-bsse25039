#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    cout << "======== " << endl;
    cout << " GUILD SYSTEM  " << endl;
    cout << "=======" << endl;

         // Creating Heroes

      Hero h1("Aragorn", 120, 70);
     Hero h2("Legolas", 90, 80);

    cout << "Hero Comparison Demo" << endl;
    cout << "--------------------" << endl;

    if (h2 > h1)
             cout << h2.getName() << " is stronger than " << h1.getName() << endl;
    else
       cout << h1.getName() << " is stronger than " << h2.getName() << endl;

                 cout << "Combined Vitality: " << (h1 + h2) << endl << endl;

          // Warrior

    Warrior w("Gimli", 110, 60, 15);
      cout << "Warrior Ability Demo" << endl;
     cout << "----------------" << endl;
       cout << w.getName() << "'s Effective Health: "
         << w.calculateEffectiveHealth() << endl << endl;

         // Knight

    Knight k("Arthur", 150, 65, 20, 30);
      cout << "Knight Ability Demo" << endl;
    cout << "-------------------" << endl;
     cout << k.getName() << "'s Burst Damage: "
         << k.calculateBurstDamage() << endl << endl;

         // Spellblade

    Spellblade s("Kael", 100, 55, 10, 40);
     cout << "Spellblade Ability Demo" << endl;
    cout << "----------------------" << endl;
      cout << "Hybrid Damage: "
         << s.calculateHybridDamage() << endl << endl;

               // Guild creation

   cout << " Guild Recoitment Demo " << endl;
  cout << "-----------------------" << endl;

    Guild guild("Guardians of Eldoria");

      guild += &h1;
      guild += &h2;
      guild += &w;
       guild += &k;

     cout << endl;
    cout << guild << endl;

   cout << " Guild Statistics" << endl;
  cout << "-----------" << endl;
guild.displayGuildStats();

cout  << endl;
cout << "=====" <<endl;
cout << "END OF GUILD DEMONSTRATION " << endl;
cout << "========" << endl;

return 0;
}
